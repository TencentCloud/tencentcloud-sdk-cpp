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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeStorageDetails请求参数结构体
                */
                class DescribeStorageDetailsRequest : public AbstractModel
                {
                public:
                    DescribeStorageDetailsRequest();
                    ~DescribeStorageDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return StartTime 起始时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param _startTime 起始时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，需大于开始日期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return EndTime 结束时间，需大于开始日期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，需大于开始日期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param _endTime 结束时间，需大于开始日期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取统计时间粒度，有效值：
<li>Minute：以5分钟为粒度。</li>
<li>Day：以天为粒度。</li>
默认按时间跨度决定，小于等于1天以5分钟为粒度，大于1天则以天为粒度。
                     * @return Interval 统计时间粒度，有效值：
<li>Minute：以5分钟为粒度。</li>
<li>Day：以天为粒度。</li>
默认按时间跨度决定，小于等于1天以5分钟为粒度，大于1天则以天为粒度。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置统计时间粒度，有效值：
<li>Minute：以5分钟为粒度。</li>
<li>Day：以天为粒度。</li>
默认按时间跨度决定，小于等于1天以5分钟为粒度，大于1天则以天为粒度。
                     * @param _interval 统计时间粒度，有效值：
<li>Minute：以5分钟为粒度。</li>
<li>Day：以天为粒度。</li>
默认按时间跨度决定，小于等于1天以5分钟为粒度，大于1天则以天为粒度。
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取查询的存储类型，有效值：
<li>TotalStorage：存储总量，标准、低频、归档和深度归档存储量之和，不含提前删除量。</li>
<li>StandardStorage：标准存储。</li>
<li>InfrequentStorage：低频存储。</li>
<li>ArchiveStorage：归档存储。</li>
<li>DeepArchiveStorage：深度归档存储。</li>
<li>DeletedInfrequentStorage：低频存储提前删除量。</li>
<li>DeletedArchiveStorage：归档提前删除量。</li>
<li>DeletedDeepArchiveStorage：深度归档提前删除量。</li>
<li>ArchiveStandardRetrieval：归档标准取回量。</li>
<li>ArchiveExpeditedRetrieval：归档快速取回量。</li>
<li>ArchiveBulkRetrieval：归档批量取回量。</li>
<li>DeepArchiveStandardRetrieval：深度归档标准取回量。</li>
<li>DeepArchiveBulkRetrieval：深度归档批量取回量。</li>
<li>InfrequentRetrieval：低频存储取回量。</li>
默认值为 TotalStorage。
                     * @return StorageType 查询的存储类型，有效值：
<li>TotalStorage：存储总量，标准、低频、归档和深度归档存储量之和，不含提前删除量。</li>
<li>StandardStorage：标准存储。</li>
<li>InfrequentStorage：低频存储。</li>
<li>ArchiveStorage：归档存储。</li>
<li>DeepArchiveStorage：深度归档存储。</li>
<li>DeletedInfrequentStorage：低频存储提前删除量。</li>
<li>DeletedArchiveStorage：归档提前删除量。</li>
<li>DeletedDeepArchiveStorage：深度归档提前删除量。</li>
<li>ArchiveStandardRetrieval：归档标准取回量。</li>
<li>ArchiveExpeditedRetrieval：归档快速取回量。</li>
<li>ArchiveBulkRetrieval：归档批量取回量。</li>
<li>DeepArchiveStandardRetrieval：深度归档标准取回量。</li>
<li>DeepArchiveBulkRetrieval：深度归档批量取回量。</li>
<li>InfrequentRetrieval：低频存储取回量。</li>
默认值为 TotalStorage。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置查询的存储类型，有效值：
<li>TotalStorage：存储总量，标准、低频、归档和深度归档存储量之和，不含提前删除量。</li>
<li>StandardStorage：标准存储。</li>
<li>InfrequentStorage：低频存储。</li>
<li>ArchiveStorage：归档存储。</li>
<li>DeepArchiveStorage：深度归档存储。</li>
<li>DeletedInfrequentStorage：低频存储提前删除量。</li>
<li>DeletedArchiveStorage：归档提前删除量。</li>
<li>DeletedDeepArchiveStorage：深度归档提前删除量。</li>
<li>ArchiveStandardRetrieval：归档标准取回量。</li>
<li>ArchiveExpeditedRetrieval：归档快速取回量。</li>
<li>ArchiveBulkRetrieval：归档批量取回量。</li>
<li>DeepArchiveStandardRetrieval：深度归档标准取回量。</li>
<li>DeepArchiveBulkRetrieval：深度归档批量取回量。</li>
<li>InfrequentRetrieval：低频存储取回量。</li>
默认值为 TotalStorage。
                     * @param _storageType 查询的存储类型，有效值：
<li>TotalStorage：存储总量，标准、低频、归档和深度归档存储量之和，不含提前删除量。</li>
<li>StandardStorage：标准存储。</li>
<li>InfrequentStorage：低频存储。</li>
<li>ArchiveStorage：归档存储。</li>
<li>DeepArchiveStorage：深度归档存储。</li>
<li>DeletedInfrequentStorage：低频存储提前删除量。</li>
<li>DeletedArchiveStorage：归档提前删除量。</li>
<li>DeletedDeepArchiveStorage：深度归档提前删除量。</li>
<li>ArchiveStandardRetrieval：归档标准取回量。</li>
<li>ArchiveExpeditedRetrieval：归档快速取回量。</li>
<li>ArchiveBulkRetrieval：归档批量取回量。</li>
<li>DeepArchiveStandardRetrieval：深度归档标准取回量。</li>
<li>DeepArchiveBulkRetrieval：深度归档批量取回量。</li>
<li>InfrequentRetrieval：低频存储取回量。</li>
默认值为 TotalStorage。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取查询的存储区域，有效值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
默认值为 Chinese Mainland。
                     * @return Area 查询的存储区域，有效值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
默认值为 Chinese Mainland。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置查询的存储区域，有效值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
默认值为 Chinese Mainland。
                     * @param _area 查询的存储区域，有效值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
默认值为 Chinese Mainland。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 起始时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，需大于开始日期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 统计时间粒度，有效值：
<li>Minute：以5分钟为粒度。</li>
<li>Day：以天为粒度。</li>
默认按时间跨度决定，小于等于1天以5分钟为粒度，大于1天则以天为粒度。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 查询的存储类型，有效值：
<li>TotalStorage：存储总量，标准、低频、归档和深度归档存储量之和，不含提前删除量。</li>
<li>StandardStorage：标准存储。</li>
<li>InfrequentStorage：低频存储。</li>
<li>ArchiveStorage：归档存储。</li>
<li>DeepArchiveStorage：深度归档存储。</li>
<li>DeletedInfrequentStorage：低频存储提前删除量。</li>
<li>DeletedArchiveStorage：归档提前删除量。</li>
<li>DeletedDeepArchiveStorage：深度归档提前删除量。</li>
<li>ArchiveStandardRetrieval：归档标准取回量。</li>
<li>ArchiveExpeditedRetrieval：归档快速取回量。</li>
<li>ArchiveBulkRetrieval：归档批量取回量。</li>
<li>DeepArchiveStandardRetrieval：深度归档标准取回量。</li>
<li>DeepArchiveBulkRetrieval：深度归档批量取回量。</li>
<li>InfrequentRetrieval：低频存储取回量。</li>
默认值为 TotalStorage。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 查询的存储区域，有效值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
默认值为 Chinese Mainland。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSREQUEST_H_
