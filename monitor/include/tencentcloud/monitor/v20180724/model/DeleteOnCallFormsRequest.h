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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEONCALLFORMSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEONCALLFORMSREQUEST_H_

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
                * DeleteOnCallForms请求参数结构体
                */
                class DeleteOnCallFormsRequest : public AbstractModel
                {
                public:
                    DeleteOnCallFormsRequest();
                    ~DeleteOnCallFormsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取要删除的值班表id
                     * @return OnCallFormIDs 要删除的值班表id
                     * 
                     */
                    std::vector<std::string> GetOnCallFormIDs() const;

                    /**
                     * 设置要删除的值班表id
                     * @param _onCallFormIDs 要删除的值班表id
                     * 
                     */
                    void SetOnCallFormIDs(const std::vector<std::string>& _onCallFormIDs);

                    /**
                     * 判断参数 OnCallFormIDs 是否已赋值
                     * @return OnCallFormIDs 是否已赋值
                     * 
                     */
                    bool OnCallFormIDsHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 要删除的值班表id
                     */
                    std::vector<std::string> m_onCallFormIDs;
                    bool m_onCallFormIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEONCALLFORMSREQUEST_H_
