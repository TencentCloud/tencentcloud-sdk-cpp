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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETIMESHIFTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETIMESHIFTTEMPLATEREQUEST_H_

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
                * CreateLiveTimeShiftTemplate请求参数结构体
                */
                class CreateLiveTimeShiftTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveTimeShiftTemplateRequest();
                    ~CreateLiveTimeShiftTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * @return TemplateName <p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * @param _templateName <p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>时移时长。单位：s。取值范围：86400 259200 604800 1296000 2592000。</p>
                     * @return Duration <p>时移时长。单位：s。取值范围：86400 259200 604800 1296000 2592000。</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>时移时长。单位：s。取值范围：86400 259200 604800 1296000 2592000。</p>
                     * @param _duration <p>时移时长。单位：s。取值范围：86400 259200 604800 1296000 2592000。</p>
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>描述信息。<br>仅支持中文、英文、数字、_、-。</p>
                     * @return Description <p>描述信息。<br>仅支持中文、英文、数字、_、-。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息。<br>仅支持中文、英文、数字、_、-。</p>
                     * @param _description <p>描述信息。<br>仅支持中文、英文、数字、_、-。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>地域。<br>Mainland：中国大陆。<br>Overseas：海外及港澳台地区。<br>EuropeFrankfurt：欧洲-法兰克福。<br>NorthAmericaSiliconValley：北美-硅谷。<br>MiddleEastRiyadh：中东-利雅得。<br>AsiaTokyo：亚太-东京。<br>AsiaSeoul：亚太-首尔。<br>默认值：Mainland。</p>
                     * @return Area <p>地域。<br>Mainland：中国大陆。<br>Overseas：海外及港澳台地区。<br>EuropeFrankfurt：欧洲-法兰克福。<br>NorthAmericaSiliconValley：北美-硅谷。<br>MiddleEastRiyadh：中东-利雅得。<br>AsiaTokyo：亚太-东京。<br>AsiaSeoul：亚太-首尔。<br>默认值：Mainland。</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>地域。<br>Mainland：中国大陆。<br>Overseas：海外及港澳台地区。<br>EuropeFrankfurt：欧洲-法兰克福。<br>NorthAmericaSiliconValley：北美-硅谷。<br>MiddleEastRiyadh：中东-利雅得。<br>AsiaTokyo：亚太-东京。<br>AsiaSeoul：亚太-首尔。<br>默认值：Mainland。</p>
                     * @param _area <p>地域。<br>Mainland：中国大陆。<br>Overseas：海外及港澳台地区。<br>EuropeFrankfurt：欧洲-法兰克福。<br>NorthAmericaSiliconValley：北美-硅谷。<br>MiddleEastRiyadh：中东-利雅得。<br>AsiaTokyo：亚太-东京。<br>AsiaSeoul：亚太-首尔。<br>默认值：Mainland。</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>分片时长。<br>可取3-10。<br>单位：s。<br>默认值：5。</p>
                     * @return ItemDuration <p>分片时长。<br>可取3-10。<br>单位：s。<br>默认值：5。</p>
                     * 
                     */
                    uint64_t GetItemDuration() const;

                    /**
                     * 设置<p>分片时长。<br>可取3-10。<br>单位：s。<br>默认值：5。</p>
                     * @param _itemDuration <p>分片时长。<br>可取3-10。<br>单位：s。<br>默认值：5。</p>
                     * 
                     */
                    void SetItemDuration(const uint64_t& _itemDuration);

                    /**
                     * 判断参数 ItemDuration 是否已赋值
                     * @return ItemDuration 是否已赋值
                     * 
                     */
                    bool ItemDurationHasBeenSet() const;

                    /**
                     * 获取<p>是否去除水印。<br>传true则将录制原始流。<br>默认值：false。</p>
                     * @return RemoveWatermark <p>是否去除水印。<br>传true则将录制原始流。<br>默认值：false。</p>
                     * 
                     */
                    bool GetRemoveWatermark() const;

                    /**
                     * 设置<p>是否去除水印。<br>传true则将录制原始流。<br>默认值：false。</p>
                     * @param _removeWatermark <p>是否去除水印。<br>传true则将录制原始流。<br>默认值：false。</p>
                     * 
                     */
                    void SetRemoveWatermark(const bool& _removeWatermark);

                    /**
                     * 判断参数 RemoveWatermark 是否已赋值
                     * @return RemoveWatermark 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>转码流id列表。<br>此参数仅在 RemoveWatermark为false时生效。</p>
                     * @return TranscodeTemplateIds <p>转码流id列表。<br>此参数仅在 RemoveWatermark为false时生效。</p>
                     * 
                     */
                    std::vector<int64_t> GetTranscodeTemplateIds() const;

                    /**
                     * 设置<p>转码流id列表。<br>此参数仅在 RemoveWatermark为false时生效。</p>
                     * @param _transcodeTemplateIds <p>转码流id列表。<br>此参数仅在 RemoveWatermark为false时生效。</p>
                     * 
                     */
                    void SetTranscodeTemplateIds(const std::vector<int64_t>& _transcodeTemplateIds);

                    /**
                     * 判断参数 TranscodeTemplateIds 是否已赋值
                     * @return TranscodeTemplateIds 是否已赋值
                     * 
                     */
                    bool TranscodeTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * <p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>时移时长。单位：s。取值范围：86400 259200 604800 1296000 2592000。</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>描述信息。<br>仅支持中文、英文、数字、_、-。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>地域。<br>Mainland：中国大陆。<br>Overseas：海外及港澳台地区。<br>EuropeFrankfurt：欧洲-法兰克福。<br>NorthAmericaSiliconValley：北美-硅谷。<br>MiddleEastRiyadh：中东-利雅得。<br>AsiaTokyo：亚太-东京。<br>AsiaSeoul：亚太-首尔。<br>默认值：Mainland。</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>分片时长。<br>可取3-10。<br>单位：s。<br>默认值：5。</p>
                     */
                    uint64_t m_itemDuration;
                    bool m_itemDurationHasBeenSet;

                    /**
                     * <p>是否去除水印。<br>传true则将录制原始流。<br>默认值：false。</p>
                     */
                    bool m_removeWatermark;
                    bool m_removeWatermarkHasBeenSet;

                    /**
                     * <p>转码流id列表。<br>此参数仅在 RemoveWatermark为false时生效。</p>
                     */
                    std::vector<int64_t> m_transcodeTemplateIds;
                    bool m_transcodeTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETIMESHIFTTEMPLATEREQUEST_H_
