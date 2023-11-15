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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHREPORTAPPMESSAGEREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHREPORTAPPMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ReportAppMessage.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * BatchReportAppMessage请求参数结构体
                */
                class BatchReportAppMessageRequest : public AbstractModel
                {
                public:
                    BatchReportAppMessageRequest();
                    ~BatchReportAppMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间Id
                     * @return WorkspaceId 工作空间Id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间Id
                     * @param _workspaceId 工作空间Id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取消息上报请求列表
                     * @return ReportSet 消息上报请求列表
                     * 
                     */
                    std::vector<ReportAppMessage> GetReportSet() const;

                    /**
                     * 设置消息上报请求列表
                     * @param _reportSet 消息上报请求列表
                     * 
                     */
                    void SetReportSet(const std::vector<ReportAppMessage>& _reportSet);

                    /**
                     * 判断参数 ReportSet 是否已赋值
                     * @return ReportSet 是否已赋值
                     * 
                     */
                    bool ReportSetHasBeenSet() const;

                private:

                    /**
                     * 工作空间Id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 消息上报请求列表
                     */
                    std::vector<ReportAppMessage> m_reportSet;
                    bool m_reportSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHREPORTAPPMESSAGEREQUEST_H_
