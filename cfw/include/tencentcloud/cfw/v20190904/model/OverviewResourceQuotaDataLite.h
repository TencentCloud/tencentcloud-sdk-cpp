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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWRESOURCEQUOTADATALITE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWRESOURCEQUOTADATALITE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/OverviewResourceQuotaDetail.h>
#include <tencentcloud/cfw/v20190904/model/VolumeUsageDetail.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 资源与配额详情返回数据，包含详情字段和能力标识
                */
                class OverviewResourceQuotaDataLite : public AbstractModel
                {
                public:
                    OverviewResourceQuotaDataLite();
                    ~OverviewResourceQuotaDataLite() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源与配额详情核心数据，包含南北向带宽、东西向带宽、NDR 带宽、资源配额和日志存储信息。</p>
                     * @return Detail <p>资源与配额详情核心数据，包含南北向带宽、东西向带宽、NDR 带宽、资源配额和日志存储信息。</p>
                     * 
                     */
                    OverviewResourceQuotaDetail GetDetail() const;

                    /**
                     * 设置<p>资源与配额详情核心数据，包含南北向带宽、东西向带宽、NDR 带宽、资源配额和日志存储信息。</p>
                     * @param _detail <p>资源与配额详情核心数据，包含南北向带宽、东西向带宽、NDR 带宽、资源配额和日志存储信息。</p>
                     * 
                     */
                    void SetDetail(const OverviewResourceQuotaDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>纯按量计费使用情况</p>
                     * @return VolumeUsageDetail <p>纯按量计费使用情况</p>
                     * 
                     */
                    VolumeUsageDetail GetVolumeUsageDetail() const;

                    /**
                     * 设置<p>纯按量计费使用情况</p>
                     * @param _volumeUsageDetail <p>纯按量计费使用情况</p>
                     * 
                     */
                    void SetVolumeUsageDetail(const VolumeUsageDetail& _volumeUsageDetail);

                    /**
                     * 判断参数 VolumeUsageDetail 是否已赋值
                     * @return VolumeUsageDetail 是否已赋值
                     * 
                     */
                    bool VolumeUsageDetailHasBeenSet() const;

                private:

                    /**
                     * <p>资源与配额详情核心数据，包含南北向带宽、东西向带宽、NDR 带宽、资源配额和日志存储信息。</p>
                     */
                    OverviewResourceQuotaDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>纯按量计费使用情况</p>
                     */
                    VolumeUsageDetail m_volumeUsageDetail;
                    bool m_volumeUsageDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWRESOURCEQUOTADATALITE_H_
