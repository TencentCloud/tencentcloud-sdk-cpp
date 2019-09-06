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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_

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
                * CreateSnapshotByTimeOffsetTemplate请求参数结构体
                */
                class CreateSnapshotByTimeOffsetTemplateRequest : public AbstractModel
                {
                public:
                    CreateSnapshotByTimeOffsetTemplateRequest();
                    ~CreateSnapshotByTimeOffsetTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片宽度，取值范围： [128, 4096]，单位：px。
                     * @return Width 图片宽度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置图片宽度，取值范围： [128, 4096]，单位：px。
                     * @param Width 图片宽度，取值范围： [128, 4096]，单位：px。
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取图片高度，取值范围： [128, 4096]，单位：px。
                     * @return Height 图片高度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置图片高度，取值范围： [128, 4096]，单位：px。
                     * @param Height 图片高度，取值范围： [128, 4096]，单位：px。
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取指定时间点截图模板名称，长度限制：64 个字符。
                     * @return Name 指定时间点截图模板名称，长度限制：64 个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置指定时间点截图模板名称，长度限制：64 个字符。
                     * @param Name 指定时间点截图模板名称，长度限制：64 个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取图片格式，取值可以为 jpg 和 png。默认为 jpg。
                     * @return Format 图片格式，取值可以为 jpg 和 png。默认为 jpg。
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置图片格式，取值可以为 jpg 和 png。默认为 jpg。
                     * @param Format 图片格式，取值可以为 jpg 和 png。默认为 jpg。
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取模板描述信息，长度限制：256 个字符。
                     * @return Comment 模板描述信息，长度限制：256 个字符。
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息，长度限制：256 个字符。
                     * @param Comment 模板描述信息，长度限制：256 个字符。
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 图片宽度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 图片高度，取值范围： [128, 4096]，单位：px。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 指定时间点截图模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图片格式，取值可以为 jpg 和 png。默认为 jpg。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_
