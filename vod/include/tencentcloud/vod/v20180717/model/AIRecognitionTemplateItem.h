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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HeadTailConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/SegmentConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/FaceConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/OcrFullTextConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/OcrWordsConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/AsrFullTextConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/AsrWordsConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/AsrTranslateConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/ObjectConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频内容识别模板详情
                */
                class AIRecognitionTemplateItem : public AbstractModel
                {
                public:
                    AIRecognitionTemplateItem();
                    ~AIRecognitionTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频内容识别模板唯一标识。
                     * @return Definition 视频内容识别模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置视频内容识别模板唯一标识。
                     * @param _definition 视频内容识别模板唯一标识。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取视频内容识别模板名称。
                     * @return Name 视频内容识别模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置视频内容识别模板名称。
                     * @param _name 视频内容识别模板名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取视频内容识别模板描述信息。
                     * @return Comment 视频内容识别模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置视频内容识别模板描述信息。
                     * @param _comment 视频内容识别模板描述信息。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @return Type 模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @param _type 模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取头尾识别控制参数。
                     * @return HeadTailConfigure 头尾识别控制参数。
                     * 
                     */
                    HeadTailConfigureInfo GetHeadTailConfigure() const;

                    /**
                     * 设置头尾识别控制参数。
                     * @param _headTailConfigure 头尾识别控制参数。
                     * 
                     */
                    void SetHeadTailConfigure(const HeadTailConfigureInfo& _headTailConfigure);

                    /**
                     * 判断参数 HeadTailConfigure 是否已赋值
                     * @return HeadTailConfigure 是否已赋值
                     * 
                     */
                    bool HeadTailConfigureHasBeenSet() const;

                    /**
                     * 获取拆条识别控制参数。
                     * @return SegmentConfigure 拆条识别控制参数。
                     * 
                     */
                    SegmentConfigureInfo GetSegmentConfigure() const;

                    /**
                     * 设置拆条识别控制参数。
                     * @param _segmentConfigure 拆条识别控制参数。
                     * 
                     */
                    void SetSegmentConfigure(const SegmentConfigureInfo& _segmentConfigure);

                    /**
                     * 判断参数 SegmentConfigure 是否已赋值
                     * @return SegmentConfigure 是否已赋值
                     * 
                     */
                    bool SegmentConfigureHasBeenSet() const;

                    /**
                     * 获取人脸识别控制参数。
                     * @return FaceConfigure 人脸识别控制参数。
                     * 
                     */
                    FaceConfigureInfo GetFaceConfigure() const;

                    /**
                     * 设置人脸识别控制参数。
                     * @param _faceConfigure 人脸识别控制参数。
                     * 
                     */
                    void SetFaceConfigure(const FaceConfigureInfo& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     * 
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取文本全文识别控制参数。
                     * @return OcrFullTextConfigure 文本全文识别控制参数。
                     * 
                     */
                    OcrFullTextConfigureInfo GetOcrFullTextConfigure() const;

                    /**
                     * 设置文本全文识别控制参数。
                     * @param _ocrFullTextConfigure 文本全文识别控制参数。
                     * 
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfo& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取文本关键词识别控制参数。
                     * @return OcrWordsConfigure 文本关键词识别控制参数。
                     * 
                     */
                    OcrWordsConfigureInfo GetOcrWordsConfigure() const;

                    /**
                     * 设置文本关键词识别控制参数。
                     * @param _ocrWordsConfigure 文本关键词识别控制参数。
                     * 
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfo& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     * 
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取语音全文识别控制参数。
<font color=red>注意：本参数已不再维护，推荐使用 AsrTranslateConfigure 参数发起语音翻译识别（当 DstLanguage 不填或填空字符串时，则不进行翻译，计费项和语音全文识别一致）。</font> 
                     * @return AsrFullTextConfigure 语音全文识别控制参数。
<font color=red>注意：本参数已不再维护，推荐使用 AsrTranslateConfigure 参数发起语音翻译识别（当 DstLanguage 不填或填空字符串时，则不进行翻译，计费项和语音全文识别一致）。</font> 
                     * 
                     */
                    AsrFullTextConfigureInfo GetAsrFullTextConfigure() const;

                    /**
                     * 设置语音全文识别控制参数。
<font color=red>注意：本参数已不再维护，推荐使用 AsrTranslateConfigure 参数发起语音翻译识别（当 DstLanguage 不填或填空字符串时，则不进行翻译，计费项和语音全文识别一致）。</font> 
                     * @param _asrFullTextConfigure 语音全文识别控制参数。
<font color=red>注意：本参数已不再维护，推荐使用 AsrTranslateConfigure 参数发起语音翻译识别（当 DstLanguage 不填或填空字符串时，则不进行翻译，计费项和语音全文识别一致）。</font> 
                     * 
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfo& _asrFullTextConfigure);

                    /**
                     * 判断参数 AsrFullTextConfigure 是否已赋值
                     * @return AsrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool AsrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取语音关键词识别控制参数。
                     * @return AsrWordsConfigure 语音关键词识别控制参数。
                     * 
                     */
                    AsrWordsConfigureInfo GetAsrWordsConfigure() const;

                    /**
                     * 设置语音关键词识别控制参数。
                     * @param _asrWordsConfigure 语音关键词识别控制参数。
                     * 
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfo& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取语音翻译识别控制参数。
                     * @return AsrTranslateConfigure 语音翻译识别控制参数。
                     * 
                     */
                    AsrTranslateConfigureInfo GetAsrTranslateConfigure() const;

                    /**
                     * 设置语音翻译识别控制参数。
                     * @param _asrTranslateConfigure 语音翻译识别控制参数。
                     * 
                     */
                    void SetAsrTranslateConfigure(const AsrTranslateConfigureInfo& _asrTranslateConfigure);

                    /**
                     * 判断参数 AsrTranslateConfigure 是否已赋值
                     * @return AsrTranslateConfigure 是否已赋值
                     * 
                     */
                    bool AsrTranslateConfigureHasBeenSet() const;

                    /**
                     * 获取物体识别控制参数。
                     * @return ObjectConfigure 物体识别控制参数。
                     * 
                     */
                    ObjectConfigureInfo GetObjectConfigure() const;

                    /**
                     * 设置物体识别控制参数。
                     * @param _objectConfigure 物体识别控制参数。
                     * 
                     */
                    void SetObjectConfigure(const ObjectConfigureInfo& _objectConfigure);

                    /**
                     * 判断参数 ObjectConfigure 是否已赋值
                     * @return ObjectConfigure 是否已赋值
                     * 
                     */
                    bool ObjectConfigureHasBeenSet() const;

                    /**
                     * 获取截图时间间隔，单位：秒。
                     * @return ScreenshotInterval 截图时间间隔，单位：秒。
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置截图时间间隔，单位：秒。
                     * @param _screenshotInterval 截图时间间隔，单位：秒。
                     * 
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     * 
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 视频内容识别模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 视频内容识别模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 视频内容识别模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 头尾识别控制参数。
                     */
                    HeadTailConfigureInfo m_headTailConfigure;
                    bool m_headTailConfigureHasBeenSet;

                    /**
                     * 拆条识别控制参数。
                     */
                    SegmentConfigureInfo m_segmentConfigure;
                    bool m_segmentConfigureHasBeenSet;

                    /**
                     * 人脸识别控制参数。
                     */
                    FaceConfigureInfo m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * 文本全文识别控制参数。
                     */
                    OcrFullTextConfigureInfo m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * 文本关键词识别控制参数。
                     */
                    OcrWordsConfigureInfo m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * 语音全文识别控制参数。
<font color=red>注意：本参数已不再维护，推荐使用 AsrTranslateConfigure 参数发起语音翻译识别（当 DstLanguage 不填或填空字符串时，则不进行翻译，计费项和语音全文识别一致）。</font> 
                     */
                    AsrFullTextConfigureInfo m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * 语音关键词识别控制参数。
                     */
                    AsrWordsConfigureInfo m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * 语音翻译识别控制参数。
                     */
                    AsrTranslateConfigureInfo m_asrTranslateConfigure;
                    bool m_asrTranslateConfigureHasBeenSet;

                    /**
                     * 物体识别控制参数。
                     */
                    ObjectConfigureInfo m_objectConfigure;
                    bool m_objectConfigureHasBeenSet;

                    /**
                     * 截图时间间隔，单位：秒。
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTEMPLATEITEM_H_
