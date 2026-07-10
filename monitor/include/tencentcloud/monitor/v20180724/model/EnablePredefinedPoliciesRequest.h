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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEPREDEFINEDPOLICIESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEPREDEFINEDPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * EnablePredefinedPolicies请求参数结构体
                */
                class EnablePredefinedPoliciesRequest : public AbstractModel
                {
                public:
                    EnablePredefinedPoliciesRequest();
                    ~EnablePredefinedPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取预设配置id
                     * @return PredefinedConfigID 预设配置id
                     * 
                     */
                    std::string GetPredefinedConfigID() const;

                    /**
                     * 设置预设配置id
                     * @param _predefinedConfigID 预设配置id
                     * 
                     */
                    void SetPredefinedConfigID(const std::string& _predefinedConfigID);

                    /**
                     * 判断参数 PredefinedConfigID 是否已赋值
                     * @return PredefinedConfigID 是否已赋值
                     * 
                     */
                    bool PredefinedConfigIDHasBeenSet() const;

                    /**
                     * 获取云产品id
                     * @return PredefinedGroupID 云产品id
                     * 
                     */
                    std::string GetPredefinedGroupID() const;

                    /**
                     * 设置云产品id
                     * @param _predefinedGroupID 云产品id
                     * 
                     */
                    void SetPredefinedGroupID(const std::string& _predefinedGroupID);

                    /**
                     * 判断参数 PredefinedGroupID 是否已赋值
                     * @return PredefinedGroupID 是否已赋值
                     * 
                     */
                    bool PredefinedGroupIDHasBeenSet() const;

                    /**
                     * 获取通知模板id
                     * @return NoticeIDs 通知模板id
                     * 
                     */
                    std::vector<std::string> GetNoticeIDs() const;

                    /**
                     * 设置通知模板id
                     * @param _noticeIDs 通知模板id
                     * 
                     */
                    void SetNoticeIDs(const std::vector<std::string>& _noticeIDs);

                    /**
                     * 判断参数 NoticeIDs 是否已赋值
                     * @return NoticeIDs 是否已赋值
                     * 
                     */
                    bool NoticeIDsHasBeenSet() const;

                private:

                    /**
                     * 预设配置id
                     */
                    std::string m_predefinedConfigID;
                    bool m_predefinedConfigIDHasBeenSet;

                    /**
                     * 云产品id
                     */
                    std::string m_predefinedGroupID;
                    bool m_predefinedGroupIDHasBeenSet;

                    /**
                     * 通知模板id
                     */
                    std::vector<std::string> m_noticeIDs;
                    bool m_noticeIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEPREDEFINEDPOLICIESREQUEST_H_
