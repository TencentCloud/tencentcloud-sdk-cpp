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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEPULLSTREAMCONFIGREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEPULLSTREAMCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreatePullStreamConfig请求参数结构体
                */
                class CreatePullStreamConfigRequest : public AbstractModel
                {
                public:
                    CreatePullStreamConfigRequest();
                    ~CreatePullStreamConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源 Url ，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播url之间使用空格拼接。
2. 目前上限支持10个url。
3. 目前不支持https协议。
4. 支持拉流文件格式：flv，rtmp，hls，mp4。
                     * @return FromUrl 源 Url ，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播url之间使用空格拼接。
2. 目前上限支持10个url。
3. 目前不支持https协议。
4. 支持拉流文件格式：flv，rtmp，hls，mp4。
                     * 
                     */
                    std::string GetFromUrl() const;

                    /**
                     * 设置源 Url ，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播url之间使用空格拼接。
2. 目前上限支持10个url。
3. 目前不支持https协议。
4. 支持拉流文件格式：flv，rtmp，hls，mp4。
                     * @param _fromUrl 源 Url ，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播url之间使用空格拼接。
2. 目前上限支持10个url。
3. 目前不支持https协议。
4. 支持拉流文件格式：flv，rtmp，hls，mp4。
                     * 
                     */
                    void SetFromUrl(const std::string& _fromUrl);

                    /**
                     * 判断参数 FromUrl 是否已赋值
                     * @return FromUrl 是否已赋值
                     * 
                     */
                    bool FromUrlHasBeenSet() const;

                    /**
                     * 获取目的 Url ，用于推流的地址，目前限制该目标地址为腾讯域名。
仅支持：rtmp 协议。
                     * @return ToUrl 目的 Url ，用于推流的地址，目前限制该目标地址为腾讯域名。
仅支持：rtmp 协议。
                     * 
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置目的 Url ，用于推流的地址，目前限制该目标地址为腾讯域名。
仅支持：rtmp 协议。
                     * @param _toUrl 目的 Url ，用于推流的地址，目前限制该目标地址为腾讯域名。
仅支持：rtmp 协议。
                     * 
                     */
                    void SetToUrl(const std::string& _toUrl);

                    /**
                     * 判断参数 ToUrl 是否已赋值
                     * @return ToUrl 是否已赋值
                     * 
                     */
                    bool ToUrlHasBeenSet() const;

                    /**
                     * 获取选择完成转拉推的服务所在区域:
1-深圳，
2-上海，
3-天津，
4-中国香港。
                     * @return AreaId 选择完成转拉推的服务所在区域:
1-深圳，
2-上海，
3-天津，
4-中国香港。
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置选择完成转拉推的服务所在区域:
1-深圳，
2-上海，
3-天津，
4-中国香港。
                     * @param _areaId 选择完成转拉推的服务所在区域:
1-深圳，
2-上海，
3-天津，
4-中国香港。
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取选择完成转拉推服务使用的运营商网络：
1-电信，
2-移动，
3-联通，
4-其他。
注：AreaId 为4的时候，IspId 只能为其他。
                     * @return IspId 选择完成转拉推服务使用的运营商网络：
1-电信，
2-移动，
3-联通，
4-其他。
注：AreaId 为4的时候，IspId 只能为其他。
                     * 
                     */
                    int64_t GetIspId() const;

                    /**
                     * 设置选择完成转拉推服务使用的运营商网络：
1-电信，
2-移动，
3-联通，
4-其他。
注：AreaId 为4的时候，IspId 只能为其他。
                     * @param _ispId 选择完成转拉推服务使用的运营商网络：
1-电信，
2-移动，
3-联通，
4-其他。
注：AreaId 为4的时候，IspId 只能为其他。
                     * 
                     */
                    void SetIspId(const int64_t& _ispId);

                    /**
                     * 判断参数 IspId 是否已赋值
                     * @return IspId 是否已赋值
                     * 
                     */
                    bool IspIdHasBeenSet() const;

                    /**
                     * 获取开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return StartTime 开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _startTime 开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return EndTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _endTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 源 Url ，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播url之间使用空格拼接。
2. 目前上限支持10个url。
3. 目前不支持https协议。
4. 支持拉流文件格式：flv，rtmp，hls，mp4。
                     */
                    std::string m_fromUrl;
                    bool m_fromUrlHasBeenSet;

                    /**
                     * 目的 Url ，用于推流的地址，目前限制该目标地址为腾讯域名。
仅支持：rtmp 协议。
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * 选择完成转拉推的服务所在区域:
1-深圳，
2-上海，
3-天津，
4-中国香港。
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 选择完成转拉推服务使用的运营商网络：
1-电信，
2-移动，
3-联通，
4-其他。
注：AreaId 为4的时候，IspId 只能为其他。
                     */
                    int64_t m_ispId;
                    bool m_ispIdHasBeenSet;

                    /**
                     * 开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEPULLSTREAMCONFIGREQUEST_H_
