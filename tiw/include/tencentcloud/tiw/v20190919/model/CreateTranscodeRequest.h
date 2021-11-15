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
                     * 获取注意: 该参数已废弃, 请使用 MinScaleResolution

转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

注意分辨率宽高中间为英文字母"xyz"的"x"
                     * @return MinResolution 注意: 该参数已废弃, 请使用 MinScaleResolution

转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

注意分辨率宽高中间为英文字母"xyz"的"x"
                     */
                    std::string GetMinResolution() const;

                    /**
                     * 设置注意: 该参数已废弃, 请使用 MinScaleResolution

转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

注意分辨率宽高中间为英文字母"xyz"的"x"
                     * @param MinResolution 注意: 该参数已废弃, 请使用 MinScaleResolution

转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

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

                    /**
                     * 获取文档转码优先级， 只有对于PPT动态转码生效，支持填入以下值：<br/>
- low: 低优先级转码，对于动态转码，能支持500MB（下载超时时间10分钟）以及2000页文档，但资源有限可能会有比较长时间的排队，请酌情使用该功能。<br/>
- 不填表示正常优先级转码，支持200MB文件（下载超时时间2分钟），500页以内的文档进行转码
<br/>
注意：对于PDF等静态文件转码，无论是正常优先级或者低优先级，最大只能支持200MB
                     * @return Priority 文档转码优先级， 只有对于PPT动态转码生效，支持填入以下值：<br/>
- low: 低优先级转码，对于动态转码，能支持500MB（下载超时时间10分钟）以及2000页文档，但资源有限可能会有比较长时间的排队，请酌情使用该功能。<br/>
- 不填表示正常优先级转码，支持200MB文件（下载超时时间2分钟），500页以内的文档进行转码
<br/>
注意：对于PDF等静态文件转码，无论是正常优先级或者低优先级，最大只能支持200MB
                     */
                    std::string GetPriority() const;

                    /**
                     * 设置文档转码优先级， 只有对于PPT动态转码生效，支持填入以下值：<br/>
- low: 低优先级转码，对于动态转码，能支持500MB（下载超时时间10分钟）以及2000页文档，但资源有限可能会有比较长时间的排队，请酌情使用该功能。<br/>
- 不填表示正常优先级转码，支持200MB文件（下载超时时间2分钟），500页以内的文档进行转码
<br/>
注意：对于PDF等静态文件转码，无论是正常优先级或者低优先级，最大只能支持200MB
                     * @param Priority 文档转码优先级， 只有对于PPT动态转码生效，支持填入以下值：<br/>
- low: 低优先级转码，对于动态转码，能支持500MB（下载超时时间10分钟）以及2000页文档，但资源有限可能会有比较长时间的排队，请酌情使用该功能。<br/>
- 不填表示正常优先级转码，支持200MB文件（下载超时时间2分钟），500页以内的文档进行转码
<br/>
注意：对于PDF等静态文件转码，无论是正常优先级或者低优先级，最大只能支持200MB
                     */
                    void SetPriority(const std::string& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率。
分辨率越高，效果越清晰，转出来的图片资源体积会越大，课件加载耗时会变长，请根据实际使用场景配置此参数。

示例：1280x720，注意分辨率宽高中间为英文字母"xyz"的"x"
                     * @return MinScaleResolution 转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率。
分辨率越高，效果越清晰，转出来的图片资源体积会越大，课件加载耗时会变长，请根据实际使用场景配置此参数。

示例：1280x720，注意分辨率宽高中间为英文字母"xyz"的"x"
                     */
                    std::string GetMinScaleResolution() const;

                    /**
                     * 设置转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率。
分辨率越高，效果越清晰，转出来的图片资源体积会越大，课件加载耗时会变长，请根据实际使用场景配置此参数。

示例：1280x720，注意分辨率宽高中间为英文字母"xyz"的"x"
                     * @param MinScaleResolution 转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率。
分辨率越高，效果越清晰，转出来的图片资源体积会越大，课件加载耗时会变长，请根据实际使用场景配置此参数。

示例：1280x720，注意分辨率宽高中间为英文字母"xyz"的"x"
                     */
                    void SetMinScaleResolution(const std::string& _minScaleResolution);

                    /**
                     * 判断参数 MinScaleResolution 是否已赋值
                     * @return MinScaleResolution 是否已赋值
                     */
                    bool MinScaleResolutionHasBeenSet() const;

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
                     * 注意: 该参数已废弃, 请使用 MinScaleResolution

转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率

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

                    /**
                     * 文档转码优先级， 只有对于PPT动态转码生效，支持填入以下值：<br/>
- low: 低优先级转码，对于动态转码，能支持500MB（下载超时时间10分钟）以及2000页文档，但资源有限可能会有比较长时间的排队，请酌情使用该功能。<br/>
- 不填表示正常优先级转码，支持200MB文件（下载超时时间2分钟），500页以内的文档进行转码
<br/>
注意：对于PDF等静态文件转码，无论是正常优先级或者低优先级，最大只能支持200MB
                     */
                    std::string m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 转码后文档的最小分辨率，不传、传空字符串或分辨率格式错误则使用文档原分辨率。
分辨率越高，效果越清晰，转出来的图片资源体积会越大，课件加载耗时会变长，请根据实际使用场景配置此参数。

示例：1280x720，注意分辨率宽高中间为英文字母"xyz"的"x"
                     */
                    std::string m_minScaleResolution;
                    bool m_minScaleResolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATETRANSCODEREQUEST_H_
