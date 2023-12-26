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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYJUSTINTIMETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/WatermarkConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyJustInTimeTranscodeTemplate请求参数结构体
                */
                class ModifyJustInTimeTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    ModifyJustInTimeTranscodeTemplateRequest();
                    ~ModifyJustInTimeTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板名字。
                     * @return Name 模板名字。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名字。
                     * @param _name 模板名字。
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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const int64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取视频参数配置。
                     * @return VideoConfigure 视频参数配置。
                     * 
                     */
                    VideoConfigureInfoForUpdate GetVideoConfigure() const;

                    /**
                     * 设置视频参数配置。
                     * @param _videoConfigure 视频参数配置。
                     * 
                     */
                    void SetVideoConfigure(const VideoConfigureInfoForUpdate& _videoConfigure);

                    /**
                     * 判断参数 VideoConfigure 是否已赋值
                     * @return VideoConfigure 是否已赋值
                     * 
                     */
                    bool VideoConfigureHasBeenSet() const;

                    /**
                     * 获取水印参数配置。
                     * @return WatermarkConfigure 水印参数配置。
                     * 
                     */
                    WatermarkConfigureInfoForUpdate GetWatermarkConfigure() const;

                    /**
                     * 设置水印参数配置。
                     * @param _watermarkConfigure 水印参数配置。
                     * 
                     */
                    void SetWatermarkConfigure(const WatermarkConfigureInfoForUpdate& _watermarkConfigure);

                    /**
                     * 判断参数 WatermarkConfigure 是否已赋值
                     * @return WatermarkConfigure 是否已赋值
                     * 
                     */
                    bool WatermarkConfigureHasBeenSet() const;

                    /**
                     * 获取模板描述，长度限制256个字符。
                     * @return Comment 模板描述，长度限制256个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述，长度限制256个字符。
                     * @param _comment 模板描述，长度限制256个字符。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 模板名字。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 视频参数配置。
                     */
                    VideoConfigureInfoForUpdate m_videoConfigure;
                    bool m_videoConfigureHasBeenSet;

                    /**
                     * 水印参数配置。
                     */
                    WatermarkConfigureInfoForUpdate m_watermarkConfigure;
                    bool m_watermarkConfigureHasBeenSet;

                    /**
                     * 模板描述，长度限制256个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
