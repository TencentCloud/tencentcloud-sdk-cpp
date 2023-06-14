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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/MediaCuttingTimeInfo.h>
#include <tencentcloud/ie/v20200304/model/MediaTargetInfo.h>
#include <tencentcloud/ie/v20200304/model/MediaCuttingOutForm.h>
#include <tencentcloud/ie/v20200304/model/MediaCuttingWatermark.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 编辑处理/剪切任务信息。
截图结果默认存在 SaveInfoSet 的第一个存储位置。
                */
                class MediaCuttingInfo : public AbstractModel
                {
                public:
                    MediaCuttingInfo();
                    ~MediaCuttingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取截取时间信息。
                     * @return TimeInfo 截取时间信息。
                     * 
                     */
                    MediaCuttingTimeInfo GetTimeInfo() const;

                    /**
                     * 设置截取时间信息。
                     * @param _timeInfo 截取时间信息。
                     * 
                     */
                    void SetTimeInfo(const MediaCuttingTimeInfo& _timeInfo);

                    /**
                     * 判断参数 TimeInfo 是否已赋值
                     * @return TimeInfo 是否已赋值
                     * 
                     */
                    bool TimeInfoHasBeenSet() const;

                    /**
                     * 获取输出结果信息。
                     * @return TargetInfo 输出结果信息。
                     * 
                     */
                    MediaTargetInfo GetTargetInfo() const;

                    /**
                     * 设置输出结果信息。
                     * @param _targetInfo 输出结果信息。
                     * 
                     */
                    void SetTargetInfo(const MediaTargetInfo& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                    /**
                     * 获取截取结果形式信息。
                     * @return OutForm 截取结果形式信息。
                     * 
                     */
                    MediaCuttingOutForm GetOutForm() const;

                    /**
                     * 设置截取结果形式信息。
                     * @param _outForm 截取结果形式信息。
                     * 
                     */
                    void SetOutForm(const MediaCuttingOutForm& _outForm);

                    /**
                     * 判断参数 OutForm 是否已赋值
                     * @return OutForm 是否已赋值
                     * 
                     */
                    bool OutFormHasBeenSet() const;

                    /**
                     * 获取列表文件形式，存储到用户存储服务中，可选值：
<li>NoListFile：不存储结果列表; </li>
<li>UseSaveInfo：默认，结果列表和结果存储同一位置（即SaveInfoSet 的第一个存储位置）；</li>
<li>SaveInfoSet 存储的Id：存储在指定的存储位置。</li>
                     * @return ResultListSaveType 列表文件形式，存储到用户存储服务中，可选值：
<li>NoListFile：不存储结果列表; </li>
<li>UseSaveInfo：默认，结果列表和结果存储同一位置（即SaveInfoSet 的第一个存储位置）；</li>
<li>SaveInfoSet 存储的Id：存储在指定的存储位置。</li>
                     * 
                     */
                    std::string GetResultListSaveType() const;

                    /**
                     * 设置列表文件形式，存储到用户存储服务中，可选值：
<li>NoListFile：不存储结果列表; </li>
<li>UseSaveInfo：默认，结果列表和结果存储同一位置（即SaveInfoSet 的第一个存储位置）；</li>
<li>SaveInfoSet 存储的Id：存储在指定的存储位置。</li>
                     * @param _resultListSaveType 列表文件形式，存储到用户存储服务中，可选值：
<li>NoListFile：不存储结果列表; </li>
<li>UseSaveInfo：默认，结果列表和结果存储同一位置（即SaveInfoSet 的第一个存储位置）；</li>
<li>SaveInfoSet 存储的Id：存储在指定的存储位置。</li>
                     * 
                     */
                    void SetResultListSaveType(const std::string& _resultListSaveType);

                    /**
                     * 判断参数 ResultListSaveType 是否已赋值
                     * @return ResultListSaveType 是否已赋值
                     * 
                     */
                    bool ResultListSaveTypeHasBeenSet() const;

                    /**
                     * 获取水印信息，最多支持 10 个水印。
                     * @return WatermarkInfoSet 水印信息，最多支持 10 个水印。
                     * 
                     */
                    std::vector<MediaCuttingWatermark> GetWatermarkInfoSet() const;

                    /**
                     * 设置水印信息，最多支持 10 个水印。
                     * @param _watermarkInfoSet 水印信息，最多支持 10 个水印。
                     * 
                     */
                    void SetWatermarkInfoSet(const std::vector<MediaCuttingWatermark>& _watermarkInfoSet);

                    /**
                     * 判断参数 WatermarkInfoSet 是否已赋值
                     * @return WatermarkInfoSet 是否已赋值
                     * 
                     */
                    bool WatermarkInfoSetHasBeenSet() const;

                    /**
                     * 获取是否去除纯色截图，如果值为 True ，对应时间点的截图如果是纯色，将略过。
                     * @return DropPureColor 是否去除纯色截图，如果值为 True ，对应时间点的截图如果是纯色，将略过。
                     * 
                     */
                    std::string GetDropPureColor() const;

                    /**
                     * 设置是否去除纯色截图，如果值为 True ，对应时间点的截图如果是纯色，将略过。
                     * @param _dropPureColor 是否去除纯色截图，如果值为 True ，对应时间点的截图如果是纯色，将略过。
                     * 
                     */
                    void SetDropPureColor(const std::string& _dropPureColor);

                    /**
                     * 判断参数 DropPureColor 是否已赋值
                     * @return DropPureColor 是否已赋值
                     * 
                     */
                    bool DropPureColorHasBeenSet() const;

                private:

                    /**
                     * 截取时间信息。
                     */
                    MediaCuttingTimeInfo m_timeInfo;
                    bool m_timeInfoHasBeenSet;

                    /**
                     * 输出结果信息。
                     */
                    MediaTargetInfo m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                    /**
                     * 截取结果形式信息。
                     */
                    MediaCuttingOutForm m_outForm;
                    bool m_outFormHasBeenSet;

                    /**
                     * 列表文件形式，存储到用户存储服务中，可选值：
<li>NoListFile：不存储结果列表; </li>
<li>UseSaveInfo：默认，结果列表和结果存储同一位置（即SaveInfoSet 的第一个存储位置）；</li>
<li>SaveInfoSet 存储的Id：存储在指定的存储位置。</li>
                     */
                    std::string m_resultListSaveType;
                    bool m_resultListSaveTypeHasBeenSet;

                    /**
                     * 水印信息，最多支持 10 个水印。
                     */
                    std::vector<MediaCuttingWatermark> m_watermarkInfoSet;
                    bool m_watermarkInfoSetHasBeenSet;

                    /**
                     * 是否去除纯色截图，如果值为 True ，对应时间点的截图如果是纯色，将略过。
                     */
                    std::string m_dropPureColor;
                    bool m_dropPureColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGINFO_H_
