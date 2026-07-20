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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DELETEAPPREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DELETEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DeleteApp请求参数结构体
                */
                class DeleteAppRequest : public AbstractModel
                {
                public:
                    DeleteAppRequest();
                    ~DeleteAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>app_id</p>
                     * @return AppId <p>app_id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>app_id</p>
                     * @param _appId <p>app_id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>删除原因(非必填,审批时展示)</p>
                     * @return Reason <p>删除原因(非必填,审批时展示)</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>删除原因(非必填,审批时展示)</p>
                     * @param _reason <p>删除原因(非必填,审批时展示)</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>app_id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>删除原因(非必填,审批时展示)</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DELETEAPPREQUEST_H_
