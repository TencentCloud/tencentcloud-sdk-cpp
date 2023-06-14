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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeWhiteboardApplicationConfig请求参数结构体
                */
                class DescribeWhiteboardApplicationConfigRequest : public AbstractModel
                {
                public:
                    DescribeWhiteboardApplicationConfigRequest();
                    ~DescribeWhiteboardApplicationConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param _sdkAppId 客户的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     * @return TaskTypes 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     * @param _taskTypes 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取需要查询配置的SdkAppId列表
                     * @return SdkAppIds 需要查询配置的SdkAppId列表
                     * 
                     */
                    std::vector<int64_t> GetSdkAppIds() const;

                    /**
                     * 设置需要查询配置的SdkAppId列表
                     * @param _sdkAppIds 需要查询配置的SdkAppId列表
                     * 
                     */
                    void SetSdkAppIds(const std::vector<int64_t>& _sdkAppIds);

                    /**
                     * 判断参数 SdkAppIds 是否已赋值
                     * @return SdkAppIds 是否已赋值
                     * 
                     */
                    bool SdkAppIdsHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * 需要查询配置的SdkAppId列表
                     */
                    std::vector<int64_t> m_sdkAppIds;
                    bool m_sdkAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDAPPLICATIONCONFIGREQUEST_H_
