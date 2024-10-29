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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUSDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginHealthStatus.h>
#include <tencentcloud/teo/v20220901/model/CheckRegionHealthStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站组健康状态详情。
                */
                class OriginGroupHealthStatusDetail : public AbstractModel
                {
                public:
                    OriginGroupHealthStatusDetail();
                    ~OriginGroupHealthStatusDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站组 ID。
                     * @return OriginGroupId 源站组 ID。
                     * 
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置源站组 ID。
                     * @param _originGroupId 源站组 ID。
                     * 
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     * 
                     */
                    bool OriginGroupIdHasBeenSet() const;

                    /**
                     * 获取根据所有探测区域的结果综合决策出来的源站组下各个源站的健康状态。超过一半的地域判定该源站不健康，则对应状态为不健康，否则为健康。
                     * @return OriginHealthStatus 根据所有探测区域的结果综合决策出来的源站组下各个源站的健康状态。超过一半的地域判定该源站不健康，则对应状态为不健康，否则为健康。
                     * 
                     */
                    std::vector<OriginHealthStatus> GetOriginHealthStatus() const;

                    /**
                     * 设置根据所有探测区域的结果综合决策出来的源站组下各个源站的健康状态。超过一半的地域判定该源站不健康，则对应状态为不健康，否则为健康。
                     * @param _originHealthStatus 根据所有探测区域的结果综合决策出来的源站组下各个源站的健康状态。超过一半的地域判定该源站不健康，则对应状态为不健康，否则为健康。
                     * 
                     */
                    void SetOriginHealthStatus(const std::vector<OriginHealthStatus>& _originHealthStatus);

                    /**
                     * 判断参数 OriginHealthStatus 是否已赋值
                     * @return OriginHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginHealthStatusHasBeenSet() const;

                    /**
                     * 获取各个健康检查区域下源站的健康状态。
                     * @return CheckRegionHealthStatus 各个健康检查区域下源站的健康状态。
                     * 
                     */
                    std::vector<CheckRegionHealthStatus> GetCheckRegionHealthStatus() const;

                    /**
                     * 设置各个健康检查区域下源站的健康状态。
                     * @param _checkRegionHealthStatus 各个健康检查区域下源站的健康状态。
                     * 
                     */
                    void SetCheckRegionHealthStatus(const std::vector<CheckRegionHealthStatus>& _checkRegionHealthStatus);

                    /**
                     * 判断参数 CheckRegionHealthStatus 是否已赋值
                     * @return CheckRegionHealthStatus 是否已赋值
                     * 
                     */
                    bool CheckRegionHealthStatusHasBeenSet() const;

                private:

                    /**
                     * 源站组 ID。
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                    /**
                     * 根据所有探测区域的结果综合决策出来的源站组下各个源站的健康状态。超过一半的地域判定该源站不健康，则对应状态为不健康，否则为健康。
                     */
                    std::vector<OriginHealthStatus> m_originHealthStatus;
                    bool m_originHealthStatusHasBeenSet;

                    /**
                     * 各个健康检查区域下源站的健康状态。
                     */
                    std::vector<CheckRegionHealthStatus> m_checkRegionHealthStatus;
                    bool m_checkRegionHealthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUSDETAIL_H_
