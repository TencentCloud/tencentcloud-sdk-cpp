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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEVIOLATIONDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEVIOLATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 实例违规详情。
                */
                class InstanceViolationDetail : public AbstractModel
                {
                public:
                    InstanceViolationDetail();
                    ~InstanceViolationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取 来源：RESTRICT：封禁、FREEZW：冻结
                     * @return Source  来源：RESTRICT：封禁、FREEZW：冻结
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置 来源：RESTRICT：封禁、FREEZW：冻结
                     * @param _source  来源：RESTRICT：封禁、FREEZW：冻结
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取是否允许自助解封：1是，2否
                     * @return State 是否允许自助解封：1是，2否
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置是否允许自助解封：1是，2否
                     * @param _state 是否允许自助解封：1是，2否
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取违规类型
                     * @return Reason 违规类型
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置违规类型
                     * @param _reason 违规类型
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取违规内容（URL、关联域名）
                     * @return Content 违规内容（URL、关联域名）
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置违规内容（URL、关联域名）
                     * @param _content 违规内容（URL、关联域名）
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     *  来源：RESTRICT：封禁、FREEZW：冻结
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 是否允许自助解封：1是，2否
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 违规类型
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 违规内容（URL、关联域名）
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEVIOLATIONDETAIL_H_
