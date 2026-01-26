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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIAREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * ImportMedia请求参数结构体
                */
                class ImportMediaRequest : public AbstractModel
                {
                public:
                    ImportMediaRequest();
                    ~ImportMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待分析视频的URL，目前只支持<em>不带签名的</em>COS地址，字段输入内容最大为1KB</p>
                     * @return URL <p>待分析视频的URL，目前只支持<em>不带签名的</em>COS地址，字段输入内容最大为1KB</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置<p>待分析视频的URL，目前只支持<em>不带签名的</em>COS地址，字段输入内容最大为1KB</p>
                     * @param _uRL <p>待分析视频的URL，目前只支持<em>不带签名的</em>COS地址，字段输入内容最大为1KB</p>
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取<p>待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32</p>
                     * @return MD5 <p>待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32</p>
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置<p>待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32</p>
                     * @param _mD5 <p>待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32</p>
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取<p>待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64</p>
                     * @return Name <p>待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64</p>
                     * @param _name <p>待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64</p>
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
                     * 获取<p>当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。推荐采用本主账号COS桶，如果使用其他账号COS桶，请确保COS桶可写，否则可导致分析失败</p>
                     * @return WriteBackCosPath <p>当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。推荐采用本主账号COS桶，如果使用其他账号COS桶，请确保COS桶可写，否则可导致分析失败</p>
                     * 
                     */
                    std::string GetWriteBackCosPath() const;

                    /**
                     * 设置<p>当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。推荐采用本主账号COS桶，如果使用其他账号COS桶，请确保COS桶可写，否则可导致分析失败</p>
                     * @param _writeBackCosPath <p>当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。推荐采用本主账号COS桶，如果使用其他账号COS桶，请确保COS桶可写，否则可导致分析失败</p>
                     * 
                     */
                    void SetWriteBackCosPath(const std::string& _writeBackCosPath);

                    /**
                     * 判断参数 WriteBackCosPath 是否已赋值
                     * @return WriteBackCosPath 是否已赋值
                     * 
                     */
                    bool WriteBackCosPathHasBeenSet() const;

                    /**
                     * 获取<p>自定义标签，可用于查询</p>
                     * @return Label <p>自定义标签，可用于查询</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>自定义标签，可用于查询</p>
                     * @param _label <p>自定义标签，可用于查询</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；</p>
                     * @return CallbackURL <p>媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；</p>
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置<p>媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；</p>
                     * @param _callbackURL <p>媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；</p>
                     * 
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     * 
                     */
                    bool CallbackURLHasBeenSet() const;

                    /**
                     * 获取<p>媒资文件类型，详细定义参见<a href="https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo">MediaPreknownInfo.MediaType</a><br>默认为2(视频)</p>
                     * @return MediaType <p>媒资文件类型，详细定义参见<a href="https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo">MediaPreknownInfo.MediaType</a><br>默认为2(视频)</p>
                     * 
                     */
                    int64_t GetMediaType() const;

                    /**
                     * 设置<p>媒资文件类型，详细定义参见<a href="https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo">MediaPreknownInfo.MediaType</a><br>默认为2(视频)</p>
                     * @param _mediaType <p>媒资文件类型，详细定义参见<a href="https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo">MediaPreknownInfo.MediaType</a><br>默认为2(视频)</p>
                     * 
                     */
                    void SetMediaType(const int64_t& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                private:

                    /**
                     * <p>待分析视频的URL，目前只支持<em>不带签名的</em>COS地址，字段输入内容最大为1KB</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32</p>
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * <p>待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。推荐采用本主账号COS桶，如果使用其他账号COS桶，请确保COS桶可写，否则可导致分析失败</p>
                     */
                    std::string m_writeBackCosPath;
                    bool m_writeBackCosPathHasBeenSet;

                    /**
                     * <p>自定义标签，可用于查询</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；</p>
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                    /**
                     * <p>媒资文件类型，详细定义参见<a href="https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo">MediaPreknownInfo.MediaType</a><br>默认为2(视频)</p>
                     */
                    int64_t m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIAREQUEST_H_
