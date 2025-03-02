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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCFAILREASON_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCFAILREASON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 同步员工失败原因
                */
                class SyncFailReason : public AbstractModel
                {
                public:
                    SyncFailReason();
                    ~SyncFailReason() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业员工标识(即OpenId)
                     * @return Id 企业员工标识(即OpenId)
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置企业员工标识(即OpenId)
                     * @param _id 企业员工标识(即OpenId)
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取新增员工或者员工离职失败原因, 可能存证ID不符合规范、证件号码不合法等原因
                     * @return Message 新增员工或者员工离职失败原因, 可能存证ID不符合规范、证件号码不合法等原因
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置新增员工或者员工离职失败原因, 可能存证ID不符合规范、证件号码不合法等原因
                     * @param _message 新增员工或者员工离职失败原因, 可能存证ID不符合规范、证件号码不合法等原因
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 企业员工标识(即OpenId)
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 新增员工或者员工离职失败原因, 可能存证ID不符合规范、证件号码不合法等原因
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCFAILREASON_H_
