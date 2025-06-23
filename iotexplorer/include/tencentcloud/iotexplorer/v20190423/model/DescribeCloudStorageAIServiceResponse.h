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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeCloudStorageAIService返回参数结构体
                */
                class DescribeCloudStorageAIServiceResponse : public AbstractModel
                {
                public:
                    DescribeCloudStorageAIServiceResponse();
                    ~DescribeCloudStorageAIServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云存 AI 套餐类型。可能取值：

- `1`：全时套餐
- `2`：事件套餐
- `3`：低功耗套餐
                     * @return Type 云存 AI 套餐类型。可能取值：

- `1`：全时套餐
- `2`：事件套餐
- `3`：低功耗套餐
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取云存 AI 套餐生效状态。可能取值：

- `0`：未开通或已过期
- `1`：生效中
                     * @return Status 云存 AI 套餐生效状态。可能取值：

- `0`：未开通或已过期
- `1`：生效中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取云存 AI 套餐过期时间 UNIX 时间戳
                     * @return ExpireTime 云存 AI 套餐过期时间 UNIX 时间戳
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取用户 ID
                     * @return UserId 用户 ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取视频分析启用状态
                     * @return Enabled 视频分析启用状态
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取视频分析配置参数
                     * @return Config 视频分析配置参数
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取视频分析识别区域
                     * @return ROI 视频分析识别区域
                     * 
                     */
                    std::string GetROI() const;

                    /**
                     * 判断参数 ROI 是否已赋值
                     * @return ROI 是否已赋值
                     * 
                     */
                    bool ROIHasBeenSet() const;

                    /**
                     * 获取云存 AI 套餐 ID
                     * @return PackageId 云存 AI 套餐 ID
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                private:

                    /**
                     * 云存 AI 套餐类型。可能取值：

- `1`：全时套餐
- `2`：事件套餐
- `3`：低功耗套餐
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 云存 AI 套餐生效状态。可能取值：

- `0`：未开通或已过期
- `1`：生效中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 云存 AI 套餐过期时间 UNIX 时间戳
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 用户 ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 视频分析启用状态
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 视频分析配置参数
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 视频分析识别区域
                     */
                    std::string m_rOI;
                    bool m_rOIHasBeenSet;

                    /**
                     * 云存 AI 套餐 ID
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICERESPONSE_H_
