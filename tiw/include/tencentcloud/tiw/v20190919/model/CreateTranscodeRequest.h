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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATETRANSCODEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATETRANSCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateTranscode请求参数结构体
                */
                class CreateTranscodeRequest : public AbstractModel
                {
                public:
                    CreateTranscodeRequest();
                    ~CreateTranscodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param SdkAppId 客户的SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取经过URL编码后的转码文件地址。URL 编码会将字符转换为可通过因特网传输的格式，比如文档地址为http://example.com/测试.pdf，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pdf。为了提高URL解析的成功率，请对URL进行编码。
                     * @return Url 经过URL编码后的转码文件地址。URL 编码会将字符转换为可通过因特网传输的格式，比如文档地址为http://example.com/测试.pdf，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pdf。为了提高URL解析的成功率，请对URL进行编码。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置经过URL编码后的转码文件地址。URL 编码会将字符转换为可通过因特网传输的格式，比如文档地址为http://example.com/测试.pdf，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pdf。为了提高URL解析的成功率，请对URL进行编码。
                     * @param Url 经过URL编码后的转码文件地址。URL 编码会将字符转换为可通过因特网传输的格式，比如文档地址为http://example.com/测试.pdf，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pdf。为了提高URL解析的成功率，请对URL进行编码。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取是否为静态PPT，默认为False；
如果IsStaticPPT为False，后缀名为.ppt或.pptx的文档会动态转码成HTML5页面，其他格式的文档会静态转码成图片；如果IsStaticPPT为True，所有格式的文档会静态转码成图片；
                     * @return IsStaticPPT 是否为静态PPT，默认为False；
如果IsStaticPPT为False，后缀名为.ppt或.pptx的文档会动态转码成HTML5页面，其他格式的文档会静态转码成图片；如果IsStaticPPT为True，所有格式的文档会静态转码成图片；
                     */
                    bool GetIsStaticPPT() const;

                    /**
                     * 设置是否为静态PPT，默认为False；
如果IsStaticPPT为False，后缀名为.ppt或.pptx的文档会动态转码成HTML5页面，其他格式的文档会静态转码成图片；如果IsStaticPPT为True，所有格式的文档会静态转码成图片；
                     * @param IsStaticPPT 是否为静态PPT，默认为False；
如果IsStaticPPT为False，后缀名为.ppt或.pptx的文档会动态转码成HTML5页面，其他格式的文档会静态转码成图片；如果IsStaticPPT为True，所有格式的文档会静态转码成图片；
                     */
                    void SetIsStaticPPT(const bool& _isStaticPPT);

                    /**
                     * 判断参数 IsStaticPPT 是否已赋值
                     * @return IsStaticPPT 是否已赋值
                     */
                    bool IsStaticPPTHasBeenSet() const;

                    /**
                     * 获取转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

注意分辨率宽高中间为英文字母"xyz"的"x"
                     * @return MinResolution 转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

注意分辨率宽高中间为英文字母"xyz"的"x"
                     */
                    std::string GetMinResolution() const;

                    /**
                     * 设置转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

注意分辨率宽高中间为英文字母"xyz"的"x"
                     * @param MinResolution 转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

注意分辨率宽高中间为英文字母"xyz"的"x"
                     */
                    void SetMinResolution(const std::string& _minResolution);

                    /**
                     * 判断参数 MinResolution 是否已赋值
                     * @return MinResolution 是否已赋值
                     */
                    bool MinResolutionHasBeenSet() const;

                    /**
                     * 获取动态PPT转码可以为文件生成该分辨率的缩略图，不传、传空字符串或分辨率格式错误则不生成缩略图，分辨率格式同MinResolution
                     * @return ThumbnailResolution 动态PPT转码可以为文件生成该分辨率的缩略图，不传、传空字符串或分辨率格式错误则不生成缩略图，分辨率格式同MinResolution
                     */
                    std::string GetThumbnailResolution() const;

                    /**
                     * 设置动态PPT转码可以为文件生成该分辨率的缩略图，不传、传空字符串或分辨率格式错误则不生成缩略图，分辨率格式同MinResolution
                     * @param ThumbnailResolution 动态PPT转码可以为文件生成该分辨率的缩略图，不传、传空字符串或分辨率格式错误则不生成缩略图，分辨率格式同MinResolution
                     */
                    void SetThumbnailResolution(const std::string& _thumbnailResolution);

                    /**
                     * 判断参数 ThumbnailResolution 是否已赋值
                     * @return ThumbnailResolution 是否已赋值
                     */
                    bool ThumbnailResolutionHasBeenSet() const;

                    /**
                     * 获取转码文件压缩格式，不传、传空字符串或不是指定的格式则不生成压缩文件，目前支持如下压缩格式：

zip： 生成`.zip`压缩包
tar.gz： 生成`.tar.gz`压缩包
                     * @return CompressFileType 转码文件压缩格式，不传、传空字符串或不是指定的格式则不生成压缩文件，目前支持如下压缩格式：

zip： 生成`.zip`压缩包
tar.gz： 生成`.tar.gz`压缩包
                     */
                    std::string GetCompressFileType() const;

                    /**
                     * 设置转码文件压缩格式，不传、传空字符串或不是指定的格式则不生成压缩文件，目前支持如下压缩格式：

zip： 生成`.zip`压缩包
tar.gz： 生成`.tar.gz`压缩包
                     * @param CompressFileType 转码文件压缩格式，不传、传空字符串或不是指定的格式则不生成压缩文件，目前支持如下压缩格式：

zip： 生成`.zip`压缩包
tar.gz： 生成`.tar.gz`压缩包
                     */
                    void SetCompressFileType(const std::string& _compressFileType);

                    /**
                     * 判断参数 CompressFileType 是否已赋值
                     * @return CompressFileType 是否已赋值
                     */
                    bool CompressFileTypeHasBeenSet() const;

                    /**
                     * 获取内部参数
                     * @return ExtraData 内部参数
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置内部参数
                     * @param ExtraData 内部参数
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     */
                    bool ExtraDataHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 经过URL编码后的转码文件地址。URL 编码会将字符转换为可通过因特网传输的格式，比如文档地址为http://example.com/测试.pdf，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pdf。为了提高URL解析的成功率，请对URL进行编码。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 是否为静态PPT，默认为False；
如果IsStaticPPT为False，后缀名为.ppt或.pptx的文档会动态转码成HTML5页面，其他格式的文档会静态转码成图片；如果IsStaticPPT为True，所有格式的文档会静态转码成图片；
                     */
                    bool m_isStaticPPT;
                    bool m_isStaticPPTHasBeenSet;

                    /**
                     * 转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

注意分辨率宽高中间为英文字母"xyz"的"x"
                     */
                    std::string m_minResolution;
                    bool m_minResolutionHasBeenSet;

                    /**
                     * 动态PPT转码可以为文件生成该分辨率的缩略图，不传、传空字符串或分辨率格式错误则不生成缩略图，分辨率格式同MinResolution
                     */
                    std::string m_thumbnailResolution;
                    bool m_thumbnailResolutionHasBeenSet;

                    /**
                     * 转码文件压缩格式，不传、传空字符串或不是指定的格式则不生成压缩文件，目前支持如下压缩格式：

zip： 生成`.zip`压缩包
tar.gz： 生成`.tar.gz`压缩包
                     */
                    std::string m_compressFileType;
                    bool m_compressFileTypeHasBeenSet;

                    /**
                     * 内部参数
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATETRANSCODEREQUEST_H_
