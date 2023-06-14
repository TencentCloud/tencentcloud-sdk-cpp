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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HEADTAILTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HEADTAILTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 片头片尾模板详情
                */
                class HeadTailTemplate : public AbstractModel
                {
                public:
                    HeadTailTemplate();
                    ~HeadTailTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片头片尾模板号。
                     * @return Definition 片头片尾模板号。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置片头片尾模板号。
                     * @param _definition 片头片尾模板号。
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
                     * 获取模板名，最大支持 64 个字符。
                     * @return Name 模板名，最大支持 64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名，最大支持 64 个字符。
                     * @param _name 模板名，最大支持 64 个字符。
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
                     * 获取模板描述，最大支持 256 个字符。
                     * @return Comment 模板描述，最大支持 256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述，最大支持 256 个字符。
                     * @param _comment 模板描述，最大支持 256 个字符。
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
                     * 获取片头候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     * @return HeadCandidateSet 片头候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     * 
                     */
                    std::vector<std::string> GetHeadCandidateSet() const;

                    /**
                     * 设置片头候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     * @param _headCandidateSet 片头候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     * 
                     */
                    void SetHeadCandidateSet(const std::vector<std::string>& _headCandidateSet);

                    /**
                     * 判断参数 HeadCandidateSet 是否已赋值
                     * @return HeadCandidateSet 是否已赋值
                     * 
                     */
                    bool HeadCandidateSetHasBeenSet() const;

                    /**
                     * 获取片尾候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     * @return TailCandidateSet 片尾候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     * 
                     */
                    std::vector<std::string> GetTailCandidateSet() const;

                    /**
                     * 设置片尾候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     * @param _tailCandidateSet 片尾候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     * 
                     */
                    void SetTailCandidateSet(const std::vector<std::string>& _tailCandidateSet);

                    /**
                     * 判断参数 TailCandidateSet 是否已赋值
                     * @return TailCandidateSet 是否已赋值
                     * 
                     */
                    bool TailCandidateSetHasBeenSet() const;

                    /**
                     * 获取填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li> gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊；</li>
<li> white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充；</li>
<li> black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
默认值：stretch 。
                     * @return FillType 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li> gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊；</li>
<li> white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充；</li>
<li> black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
默认值：stretch 。
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li> gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊；</li>
<li> white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充；</li>
<li> black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
默认值：stretch 。
                     * @param _fillType 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li> gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊；</li>
<li> white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充；</li>
<li> black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
默认值：stretch 。
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

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
                     * 片头片尾模板号。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 模板名，最大支持 64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述，最大支持 256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 片头候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     */
                    std::vector<std::string> m_headCandidateSet;
                    bool m_headCandidateSetHasBeenSet;

                    /**
                     * 片尾候选列表。使用时会选择跟正片分辨率最贴近的一个使用，当存在相同的候选时，选择第一个使用，最大支持 5 个。
                     */
                    std::vector<std::string> m_tailCandidateSet;
                    bool m_tailCandidateSetHasBeenSet;

                    /**
                     * 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li> gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊；</li>
<li> white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充；</li>
<li> black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
默认值：stretch 。
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HEADTAILTEMPLATE_H_
