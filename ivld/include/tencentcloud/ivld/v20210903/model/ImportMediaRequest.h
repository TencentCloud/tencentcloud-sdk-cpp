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
                     * 获取待分析视频的URL，目前只支持*不带签名的*COS地址，字段输入内容最大为1KB
                     * @return URL 待分析视频的URL，目前只支持*不带签名的*COS地址，字段输入内容最大为1KB
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置待分析视频的URL，目前只支持*不带签名的*COS地址，字段输入内容最大为1KB
                     * @param _uRL 待分析视频的URL，目前只支持*不带签名的*COS地址，字段输入内容最大为1KB
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
                     * 获取待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32
                     * @return MD5 待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32
                     * @param _mD5 待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32
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
                     * 获取待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64
                     * @return Name 待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64
                     * @param _name 待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64
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
                     * 获取当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。
推荐采用本主帐号COS桶，如果使用其他帐号COS桶，请确保COS桶可写，否则可导致分析失败
                     * @return WriteBackCosPath 当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。
推荐采用本主帐号COS桶，如果使用其他帐号COS桶，请确保COS桶可写，否则可导致分析失败
                     * 
                     */
                    std::string GetWriteBackCosPath() const;

                    /**
                     * 设置当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。
推荐采用本主帐号COS桶，如果使用其他帐号COS桶，请确保COS桶可写，否则可导致分析失败
                     * @param _writeBackCosPath 当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。
推荐采用本主帐号COS桶，如果使用其他帐号COS桶，请确保COS桶可写，否则可导致分析失败
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
                     * 获取自定义标签，可用于查询
                     * @return Label 自定义标签，可用于查询
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置自定义标签，可用于查询
                     * @param _label 自定义标签，可用于查询
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
                     * 获取媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；
                     * @return CallbackURL 媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；
                     * @param _callbackURL 媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；
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
                     * 获取媒资文件类型，详细定义参见[MediaPreknownInfo.MediaType](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
默认为2(视频)
                     * @return MediaType 媒资文件类型，详细定义参见[MediaPreknownInfo.MediaType](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
默认为2(视频)
                     * 
                     */
                    int64_t GetMediaType() const;

                    /**
                     * 设置媒资文件类型，详细定义参见[MediaPreknownInfo.MediaType](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
默认为2(视频)
                     * @param _mediaType 媒资文件类型，详细定义参见[MediaPreknownInfo.MediaType](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
默认为2(视频)
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
                     * 待分析视频的URL，目前只支持*不带签名的*COS地址，字段输入内容最大为1KB
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 待分析视频的名称，指定后可支持筛选，视频名称的大小长度不能超过64
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 当非本人外部视频地址导入时，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。
推荐采用本主帐号COS桶，如果使用其他帐号COS桶，请确保COS桶可写，否则可导致分析失败
                     */
                    std::string m_writeBackCosPath;
                    bool m_writeBackCosPathHasBeenSet;

                    /**
                     * 自定义标签，可用于查询
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 媒资导入完成的回调地址，该设置优先级高于控制台全局的设置；
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                    /**
                     * 媒资文件类型，详细定义参见[MediaPreknownInfo.MediaType](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
默认为2(视频)
                     */
                    int64_t m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIAREQUEST_H_
