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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMCONFIGREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMCONFIGREQUEST_H_

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
                * ModifyPullStreamConfig请求参数结构体
                */
                class ModifyPullStreamConfigRequest : public AbstractModel
                {
                public:
                    ModifyPullStreamConfigRequest();
                    ~ModifyPullStreamConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置 ID。
获取来源：
1. 创建拉流配置接口CreatePullStreamConfig返回的配置 ID。
2. 通过查询接口DescribePullStreamConfigs获取配置 ID。
                     * @return ConfigId 配置 ID。
获取来源：
1. 创建拉流配置接口CreatePullStreamConfig返回的配置 ID。
2. 通过查询接口DescribePullStreamConfigs获取配置 ID。
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置 ID。
获取来源：
1. 创建拉流配置接口CreatePullStreamConfig返回的配置 ID。
2. 通过查询接口DescribePullStreamConfigs获取配置 ID。
                     * @param _configId 配置 ID。
获取来源：
1. 创建拉流配置接口CreatePullStreamConfig返回的配置 ID。
2. 通过查询接口DescribePullStreamConfigs获取配置 ID。
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取源 URL，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播 URL 之间使用空格拼接。
2. 目前上限支持10个 URL。
3. 支持拉流文件格式：FLV，RTMP，HLS，MP4。
4. 使用标准三层样式，如：http://test.com/live/stream.flv。
                     * @return FromUrl 源 URL，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播 URL 之间使用空格拼接。
2. 目前上限支持10个 URL。
3. 支持拉流文件格式：FLV，RTMP，HLS，MP4。
4. 使用标准三层样式，如：http://test.com/live/stream.flv。
                     * 
                     */
                    std::string GetFromUrl() const;

                    /**
                     * 设置源 URL，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播 URL 之间使用空格拼接。
2. 目前上限支持10个 URL。
3. 支持拉流文件格式：FLV，RTMP，HLS，MP4。
4. 使用标准三层样式，如：http://test.com/live/stream.flv。
                     * @param _fromUrl 源 URL，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播 URL 之间使用空格拼接。
2. 目前上限支持10个 URL。
3. 支持拉流文件格式：FLV，RTMP，HLS，MP4。
4. 使用标准三层样式，如：http://test.com/live/stream.flv。
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
                     * 获取目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。
1. 仅支持 RTMP 协议。
2. 使用标准三层样式，如：http://test.com/live/stream.flv。
                     * @return ToUrl 目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。
1. 仅支持 RTMP 协议。
2. 使用标准三层样式，如：http://test.com/live/stream.flv。
                     * 
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。
1. 仅支持 RTMP 协议。
2. 使用标准三层样式，如：http://test.com/live/stream.flv。
                     * @param _toUrl 目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。
1. 仅支持 RTMP 协议。
2. 使用标准三层样式，如：http://test.com/live/stream.flv。
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
                     * 获取区域 ID：
1-深圳。
2-上海。
3-天津。
4-中国香港。
如有改动，需同时传入IspId。
                     * @return AreaId 区域 ID：
1-深圳。
2-上海。
3-天津。
4-中国香港。
如有改动，需同时传入IspId。
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置区域 ID：
1-深圳。
2-上海。
3-天津。
4-中国香港。
如有改动，需同时传入IspId。
                     * @param _areaId 区域 ID：
1-深圳。
2-上海。
3-天津。
4-中国香港。
如有改动，需同时传入IspId。
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
                     * 获取运营商 ID，
1：电信。
2：移动。
3：联通。
4：其他。
AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。
                     * @return IspId 运营商 ID，
1：电信。
2：移动。
3：联通。
4：其他。
AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。
                     * 
                     */
                    int64_t GetIspId() const;

                    /**
                     * 设置运营商 ID，
1：电信。
2：移动。
3：联通。
4：其他。
AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。
                     * @param _ispId 运营商 ID，
1：电信。
2：移动。
3：联通。
4：其他。
AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。
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
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return StartTime 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _startTime 开始时间。
使用UTC格式时间，
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

使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return EndTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。

使用UTC格式时间，
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

使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _endTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。

使用UTC格式时间，
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
                     * 配置 ID。
获取来源：
1. 创建拉流配置接口CreatePullStreamConfig返回的配置 ID。
2. 通过查询接口DescribePullStreamConfigs获取配置 ID。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 源 URL，用于拉流的地址。目前可支持直播流及点播文件。
注意：
1. 多个点播 URL 之间使用空格拼接。
2. 目前上限支持10个 URL。
3. 支持拉流文件格式：FLV，RTMP，HLS，MP4。
4. 使用标准三层样式，如：http://test.com/live/stream.flv。
                     */
                    std::string m_fromUrl;
                    bool m_fromUrlHasBeenSet;

                    /**
                     * 目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。
1. 仅支持 RTMP 协议。
2. 使用标准三层样式，如：http://test.com/live/stream.flv。
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * 区域 ID：
1-深圳。
2-上海。
3-天津。
4-中国香港。
如有改动，需同时传入IspId。
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 运营商 ID，
1：电信。
2：移动。
3：联通。
4：其他。
AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。
                     */
                    int64_t m_ispId;
                    bool m_ispIdHasBeenSet;

                    /**
                     * 开始时间。
使用UTC格式时间，
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

使用UTC格式时间，
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

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMCONFIGREQUEST_H_
