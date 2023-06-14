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
                     * 获取模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * @return TemplateName 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * @param _templateName 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
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
                     * 获取时移时长。
单位：s。
                     * @return Duration 时移时长。
单位：s。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置时移时长。
单位：s。
                     * @param _duration 时移时长。
单位：s。
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
                     * 获取描述信息。
仅支持中文、英文、数字、_、-。
                     * @return Description 描述信息。
仅支持中文、英文、数字、_、-。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
仅支持中文、英文、数字、_、-。
                     * @param _description 描述信息。
仅支持中文、英文、数字、_、-。
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
                     * 获取地域。
Mainland：中国大陆。
Overseas：海外及港澳台地区。
默认值：Mainland。
                     * @return Area 地域。
Mainland：中国大陆。
Overseas：海外及港澳台地区。
默认值：Mainland。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域。
Mainland：中国大陆。
Overseas：海外及港澳台地区。
默认值：Mainland。
                     * @param _area 地域。
Mainland：中国大陆。
Overseas：海外及港澳台地区。
默认值：Mainland。
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
                     * 获取分片时长。
可取3-10。
单位：s。
默认值：5。
                     * @return ItemDuration 分片时长。
可取3-10。
单位：s。
默认值：5。
                     * 
                     */
                    uint64_t GetItemDuration() const;

                    /**
                     * 设置分片时长。
可取3-10。
单位：s。
默认值：5。
                     * @param _itemDuration 分片时长。
可取3-10。
单位：s。
默认值：5。
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
                     * 获取是否去除水印。
传true则将录制原始流。
默认值：false。
                     * @return RemoveWatermark 是否去除水印。
传true则将录制原始流。
默认值：false。
                     * 
                     */
                    bool GetRemoveWatermark() const;

                    /**
                     * 设置是否去除水印。
传true则将录制原始流。
默认值：false。
                     * @param _removeWatermark 是否去除水印。
传true则将录制原始流。
默认值：false。
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
                     * 获取转码流id列表。
此参数仅在 RemoveWatermark为false时生效。
                     * @return TranscodeTemplateIds 转码流id列表。
此参数仅在 RemoveWatermark为false时生效。
                     * 
                     */
                    std::vector<int64_t> GetTranscodeTemplateIds() const;

                    /**
                     * 设置转码流id列表。
此参数仅在 RemoveWatermark为false时生效。
                     * @param _transcodeTemplateIds 转码流id列表。
此参数仅在 RemoveWatermark为false时生效。
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
                     * 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 时移时长。
单位：s。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 描述信息。
仅支持中文、英文、数字、_、-。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 地域。
Mainland：中国大陆。
Overseas：海外及港澳台地区。
默认值：Mainland。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 分片时长。
可取3-10。
单位：s。
默认值：5。
                     */
                    uint64_t m_itemDuration;
                    bool m_itemDurationHasBeenSet;

                    /**
                     * 是否去除水印。
传true则将录制原始流。
默认值：false。
                     */
                    bool m_removeWatermark;
                    bool m_removeWatermarkHasBeenSet;

                    /**
                     * 转码流id列表。
此参数仅在 RemoveWatermark为false时生效。
                     */
                    std::vector<int64_t> m_transcodeTemplateIds;
                    bool m_transcodeTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETIMESHIFTTEMPLATEREQUEST_H_
