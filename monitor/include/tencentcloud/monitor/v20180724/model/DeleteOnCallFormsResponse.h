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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEONCALLFORMSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEONCALLFORMSRESPONSE_H_

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
                * DeleteOnCallForms返回参数结构体
                */
                class DeleteOnCallFormsResponse : public AbstractModel
                {
                public:
                    DeleteOnCallFormsResponse();
                    ~DeleteOnCallFormsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取失败删除的排班id
                     * @return FailedOnCallFormIDs 失败删除的排班id
                     * 
                     */
                    std::vector<std::string> GetFailedOnCallFormIDs() const;

                    /**
                     * 判断参数 FailedOnCallFormIDs 是否已赋值
                     * @return FailedOnCallFormIDs 是否已赋值
                     * 
                     */
                    bool FailedOnCallFormIDsHasBeenSet() const;

                    /**
                     * 获取成功删除的排班id
                     * @return SuccessOnCallFormIDs 成功删除的排班id
                     * 
                     */
                    std::vector<std::string> GetSuccessOnCallFormIDs() const;

                    /**
                     * 判断参数 SuccessOnCallFormIDs 是否已赋值
                     * @return SuccessOnCallFormIDs 是否已赋值
                     * 
                     */
                    bool SuccessOnCallFormIDsHasBeenSet() const;

                private:

                    /**
                     * 失败删除的排班id
                     */
                    std::vector<std::string> m_failedOnCallFormIDs;
                    bool m_failedOnCallFormIDsHasBeenSet;

                    /**
                     * 成功删除的排班id
                     */
                    std::vector<std::string> m_successOnCallFormIDs;
                    bool m_successOnCallFormIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEONCALLFORMSRESPONSE_H_
