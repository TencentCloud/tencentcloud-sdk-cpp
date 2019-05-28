/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_SINGLEBLACKAPPLY_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_SINGLEBLACKAPPLY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 黑名单申请信息
                */
                class SingleBlackApply : public AbstractModel
                {
                public:
                    SingleBlackApply();
                    ~SingleBlackApply() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator);
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取黑名单类型，01代表手机号码。
                     * @return BlackType 黑名单类型，01代表手机号码。
                     */
                    std::string GetBlackType() const;

                    /**
                     * 设置黑名单类型，01代表手机号码。
                     * @param BlackType 黑名单类型，01代表手机号码。
                     */
                    void SetBlackType(const std::string& blackType);

                    /**
                     * 判断参数 BlackType 是否已赋值
                     * @return BlackType 是否已赋值
                     */
                    bool BlackTypeHasBeenSet() const;

                    /**
                     * 获取操作类型，A为新增，D为删除。
                     * @return OperationType 操作类型，A为新增，D为删除。
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型，A为新增，D为删除。
                     * @param OperationType 操作类型，A为新增，D为删除。
                     */
                    void SetOperationType(const std::string& operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取黑名单值，BlackType为01时，填写11位手机号码。
                     * @return BlackValue 黑名单值，BlackType为01时，填写11位手机号码。
                     */
                    std::string GetBlackValue() const;

                    /**
                     * 设置黑名单值，BlackType为01时，填写11位手机号码。
                     * @param BlackValue 黑名单值，BlackType为01时，填写11位手机号码。
                     */
                    void SetBlackValue(const std::string& blackValue);

                    /**
                     * 判断参数 BlackValue 是否已赋值
                     * @return BlackValue 是否已赋值
                     */
                    bool BlackValueHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return BlackDescription 备注。
                     */
                    std::string GetBlackDescription() const;

                    /**
                     * 设置备注。
                     * @param BlackDescription 备注。
                     */
                    void SetBlackDescription(const std::string& blackDescription);

                    /**
                     * 判断参数 BlackDescription 是否已赋值
                     * @return BlackDescription 是否已赋值
                     */
                    bool BlackDescriptionHasBeenSet() const;

                private:

                    /**
                     * 黑名单类型，01代表手机号码。
                     */
                    std::string m_blackType;
                    bool m_blackTypeHasBeenSet;

                    /**
                     * 操作类型，A为新增，D为删除。
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 黑名单值，BlackType为01时，填写11位手机号码。
                     */
                    std::string m_blackValue;
                    bool m_blackValueHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_blackDescription;
                    bool m_blackDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_SINGLEBLACKAPPLY_H_
