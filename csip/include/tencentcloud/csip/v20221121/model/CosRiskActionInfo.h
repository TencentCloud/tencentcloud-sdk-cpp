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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKACTIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKACTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 风险接口情况
                */
                class CosRiskActionInfo : public AbstractModel
                {
                public:
                    CosRiskActionInfo();
                    ~CosRiskActionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接口名
                     * @return ActionName 接口名
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置接口名
                     * @param _actionName 接口名
                     * 
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     * 
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取接口名中文
                     * @return ActionNameCn 接口名中文
                     * 
                     */
                    std::string GetActionNameCn() const;

                    /**
                     * 设置接口名中文
                     * @param _actionNameCn 接口名中文
                     * 
                     */
                    void SetActionNameCn(const std::string& _actionNameCn);

                    /**
                     * 判断参数 ActionNameCn 是否已赋值
                     * @return ActionNameCn 是否已赋值
                     * 
                     */
                    bool ActionNameCnHasBeenSet() const;

                    /**
                     * 获取调用次数
                     * @return InvokeCount 调用次数
                     * 
                     */
                    int64_t GetInvokeCount() const;

                    /**
                     * 设置调用次数
                     * @param _invokeCount 调用次数
                     * 
                     */
                    void SetInvokeCount(const int64_t& _invokeCount);

                    /**
                     * 判断参数 InvokeCount 是否已赋值
                     * @return InvokeCount 是否已赋值
                     * 
                     */
                    bool InvokeCountHasBeenSet() const;

                    /**
                     * 获取最后访问时间Unix时间单位毫秒
                     * @return ActionAccessTime 最后访问时间Unix时间单位毫秒
                     * 
                     */
                    int64_t GetActionAccessTime() const;

                    /**
                     * 设置最后访问时间Unix时间单位毫秒
                     * @param _actionAccessTime 最后访问时间Unix时间单位毫秒
                     * 
                     */
                    void SetActionAccessTime(const int64_t& _actionAccessTime);

                    /**
                     * 判断参数 ActionAccessTime 是否已赋值
                     * @return ActionAccessTime 是否已赋值
                     * 
                     */
                    bool ActionAccessTimeHasBeenSet() const;

                private:

                    /**
                     * 接口名
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * 接口名中文
                     */
                    std::string m_actionNameCn;
                    bool m_actionNameCnHasBeenSet;

                    /**
                     * 调用次数
                     */
                    int64_t m_invokeCount;
                    bool m_invokeCountHasBeenSet;

                    /**
                     * 最后访问时间Unix时间单位毫秒
                     */
                    int64_t m_actionAccessTime;
                    bool m_actionAccessTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKACTIONINFO_H_
