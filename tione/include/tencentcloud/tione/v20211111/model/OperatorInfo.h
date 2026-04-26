/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_OPERATORINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_OPERATORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 操作者信息
                */
                class OperatorInfo : public AbstractModel
                {
                public:
                    OperatorInfo();
                    ~OperatorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>操作者子账号 UIN</p>
                     * @return SubUin <p>操作者子账号 UIN</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>操作者子账号 UIN</p>
                     * @param _subUin <p>操作者子账号 UIN</p>
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>操作者子账号名称</p>
                     * @return SubUinName <p>操作者子账号名称</p>
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置<p>操作者子账号名称</p>
                     * @param _subUinName <p>操作者子账号名称</p>
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                    /**
                     * 获取<p>是否为平台操作</p>
                     * @return IsPlatformOperator <p>是否为平台操作</p>
                     * 
                     */
                    bool GetIsPlatformOperator() const;

                    /**
                     * 设置<p>是否为平台操作</p>
                     * @param _isPlatformOperator <p>是否为平台操作</p>
                     * 
                     */
                    void SetIsPlatformOperator(const bool& _isPlatformOperator);

                    /**
                     * 判断参数 IsPlatformOperator 是否已赋值
                     * @return IsPlatformOperator 是否已赋值
                     * 
                     */
                    bool IsPlatformOperatorHasBeenSet() const;

                    /**
                     * 获取<p>操作类型</p>
                     * @return OperationType <p>操作类型</p>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置<p>操作类型</p>
                     * @param _operationType <p>操作类型</p>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                private:

                    /**
                     * <p>操作者子账号 UIN</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>操作者子账号名称</p>
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * <p>是否为平台操作</p>
                     */
                    bool m_isPlatformOperator;
                    bool m_isPlatformOperatorHasBeenSet;

                    /**
                     * <p>操作类型</p>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_OPERATORINFO_H_
