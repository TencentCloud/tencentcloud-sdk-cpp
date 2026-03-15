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
                     * 获取<p>配置 ID。<br>获取来源：</p><ol><li>创建拉流配置接口CreatePullStreamConfig返回的配置 ID。</li><li>通过查询接口DescribePullStreamConfigs获取配置 ID。</li></ol>
                     * @return ConfigId <p>配置 ID。<br>获取来源：</p><ol><li>创建拉流配置接口CreatePullStreamConfig返回的配置 ID。</li><li>通过查询接口DescribePullStreamConfigs获取配置 ID。</li></ol>
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置<p>配置 ID。<br>获取来源：</p><ol><li>创建拉流配置接口CreatePullStreamConfig返回的配置 ID。</li><li>通过查询接口DescribePullStreamConfigs获取配置 ID。</li></ol>
                     * @param _configId <p>配置 ID。<br>获取来源：</p><ol><li>创建拉流配置接口CreatePullStreamConfig返回的配置 ID。</li><li>通过查询接口DescribePullStreamConfigs获取配置 ID。</li></ol>
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
                     * 获取<p>源 URL，用于拉流的地址。目前可支持直播流及点播文件。<br>注意：</p><ol><li>多个点播 URL 之间使用空格拼接。</li><li>目前上限支持10个 URL。</li><li>支持拉流文件格式：FLV，RTMP，HLS，MP4。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
                     * @return FromUrl <p>源 URL，用于拉流的地址。目前可支持直播流及点播文件。<br>注意：</p><ol><li>多个点播 URL 之间使用空格拼接。</li><li>目前上限支持10个 URL。</li><li>支持拉流文件格式：FLV，RTMP，HLS，MP4。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
                     * 
                     */
                    std::string GetFromUrl() const;

                    /**
                     * 设置<p>源 URL，用于拉流的地址。目前可支持直播流及点播文件。<br>注意：</p><ol><li>多个点播 URL 之间使用空格拼接。</li><li>目前上限支持10个 URL。</li><li>支持拉流文件格式：FLV，RTMP，HLS，MP4。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
                     * @param _fromUrl <p>源 URL，用于拉流的地址。目前可支持直播流及点播文件。<br>注意：</p><ol><li>多个点播 URL 之间使用空格拼接。</li><li>目前上限支持10个 URL。</li><li>支持拉流文件格式：FLV，RTMP，HLS，MP4。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
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
                     * 获取<p>目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。</p><ol><li>仅支持 RTMP 协议。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
                     * @return ToUrl <p>目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。</p><ol><li>仅支持 RTMP 协议。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
                     * 
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置<p>目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。</p><ol><li>仅支持 RTMP 协议。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
                     * @param _toUrl <p>目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。</p><ol><li>仅支持 RTMP 协议。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
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
                     * 获取<p>区域 ID：<br>1-深圳。<br>2-上海。<br>3-天津。<br>4-中国香港。<br>如有改动，需同时传入IspId。</p>
                     * @return AreaId <p>区域 ID：<br>1-深圳。<br>2-上海。<br>3-天津。<br>4-中国香港。<br>如有改动，需同时传入IspId。</p>
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置<p>区域 ID：<br>1-深圳。<br>2-上海。<br>3-天津。<br>4-中国香港。<br>如有改动，需同时传入IspId。</p>
                     * @param _areaId <p>区域 ID：<br>1-深圳。<br>2-上海。<br>3-天津。<br>4-中国香港。<br>如有改动，需同时传入IspId。</p>
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
                     * 获取<p>运营商 ID，<br>1：电信。<br>2：移动。<br>3：联通。<br>4：其他。<br>AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。</p>
                     * @return IspId <p>运营商 ID，<br>1：电信。<br>2：移动。<br>3：联通。<br>4：其他。<br>AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。</p>
                     * 
                     */
                    int64_t GetIspId() const;

                    /**
                     * 设置<p>运营商 ID，<br>1：电信。<br>2：移动。<br>3：联通。<br>4：其他。<br>AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。</p>
                     * @param _ispId <p>运营商 ID，<br>1：电信。<br>2：移动。<br>3：联通。<br>4：其他。<br>AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。</p>
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
                     * 获取<p>开始时间。<br>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @return StartTime <p>开始时间。<br>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间。<br>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @param _startTime <p>开始时间。<br>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
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
                     * 获取<p>结束时间，注意：</p><ol><li>结束时间必须大于开始时间；</li><li>结束时间和开始时间必须大于当前时间；</li><li>结束时间 和 开始时间 间隔必须小于七天。</li></ol><p>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @return EndTime <p>结束时间，注意：</p><ol><li>结束时间必须大于开始时间；</li><li>结束时间和开始时间必须大于当前时间；</li><li>结束时间 和 开始时间 间隔必须小于七天。</li></ol><p>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，注意：</p><ol><li>结束时间必须大于开始时间；</li><li>结束时间和开始时间必须大于当前时间；</li><li>结束时间 和 开始时间 间隔必须小于七天。</li></ol><p>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @param _endTime <p>结束时间，注意：</p><ol><li>结束时间必须大于开始时间；</li><li>结束时间和开始时间必须大于当前时间；</li><li>结束时间 和 开始时间 间隔必须小于七天。</li></ol><p>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
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
                     * <p>配置 ID。<br>获取来源：</p><ol><li>创建拉流配置接口CreatePullStreamConfig返回的配置 ID。</li><li>通过查询接口DescribePullStreamConfigs获取配置 ID。</li></ol>
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * <p>源 URL，用于拉流的地址。目前可支持直播流及点播文件。<br>注意：</p><ol><li>多个点播 URL 之间使用空格拼接。</li><li>目前上限支持10个 URL。</li><li>支持拉流文件格式：FLV，RTMP，HLS，MP4。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
                     */
                    std::string m_fromUrl;
                    bool m_fromUrlHasBeenSet;

                    /**
                     * <p>目的 URL，用于推流的地址，目前限制该目标地址为腾讯域名。</p><ol><li>仅支持 RTMP 协议。</li><li>使用标准三层样式，如：http://test.com/live/stream.flv。</li></ol>
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * <p>区域 ID：<br>1-深圳。<br>2-上海。<br>3-天津。<br>4-中国香港。<br>如有改动，需同时传入IspId。</p>
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * <p>运营商 ID，<br>1：电信。<br>2：移动。<br>3：联通。<br>4：其他。<br>AreaId为4的时候，IspId只能为其他。如有改动，需同时传入AreaId。</p>
                     */
                    int64_t m_ispId;
                    bool m_ispIdHasBeenSet;

                    /**
                     * <p>开始时间。<br>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，注意：</p><ol><li>结束时间必须大于开始时间；</li><li>结束时间和开始时间必须大于当前时间；</li><li>结束时间 和 开始时间 间隔必须小于七天。</li></ol><p>使用UTC格式时间，<br>例如：2019-01-08T10:00:00Z。<br>注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMCONFIGREQUEST_H_
