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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosInputInfo.h>
#include <tencentcloud/mps/v20190612/model/UrlInputInfo.h>
#include <tencentcloud/mps/v20190612/model/S3InputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 媒体处理的输入对象信息。
                */
                class MediaInputInfo : public AbstractModel
                {
                public:
                    MediaInputInfo();
                    ~MediaInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入来源对象的类型，支持：
<li> COS：COS源</li>
<li> URL：URL源</li>
<li> AWS-S3：AWS 源，目前只支持转码任务 </li>
                     * @return Type 输入来源对象的类型，支持：
<li> COS：COS源</li>
<li> URL：URL源</li>
<li> AWS-S3：AWS 源，目前只支持转码任务 </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置输入来源对象的类型，支持：
<li> COS：COS源</li>
<li> URL：URL源</li>
<li> AWS-S3：AWS 源，目前只支持转码任务 </li>
                     * @param _type 输入来源对象的类型，支持：
<li> COS：COS源</li>
<li> URL：URL源</li>
<li> AWS-S3：AWS 源，目前只支持转码任务 </li>
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
                     * 获取当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 对象信息。
                     * @return CosInputInfo 当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 对象信息。
                     * 
                     */
                    CosInputInfo GetCosInputInfo() const;

                    /**
                     * 设置当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 对象信息。
                     * @param _cosInputInfo 当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 对象信息。
                     * 
                     */
                    void SetCosInputInfo(const CosInputInfo& _cosInputInfo);

                    /**
                     * 判断参数 CosInputInfo 是否已赋值
                     * @return CosInputInfo 是否已赋值
                     * 
                     */
                    bool CosInputInfoHasBeenSet() const;

                    /**
                     * 获取当 Type 为 URL 时有效，则该项为必填，表示媒体处理 URL 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UrlInputInfo 当 Type 为 URL 时有效，则该项为必填，表示媒体处理 URL 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UrlInputInfo GetUrlInputInfo() const;

                    /**
                     * 设置当 Type 为 URL 时有效，则该项为必填，表示媒体处理 URL 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _urlInputInfo 当 Type 为 URL 时有效，则该项为必填，表示媒体处理 URL 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrlInputInfo(const UrlInputInfo& _urlInputInfo);

                    /**
                     * 判断参数 UrlInputInfo 是否已赋值
                     * @return UrlInputInfo 是否已赋值
                     * 
                     */
                    bool UrlInputInfoHasBeenSet() const;

                    /**
                     * 获取当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3InputInfo 当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    S3InputInfo GetS3InputInfo() const;

                    /**
                     * 设置当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3InputInfo 当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3InputInfo(const S3InputInfo& _s3InputInfo);

                    /**
                     * 判断参数 S3InputInfo 是否已赋值
                     * @return S3InputInfo 是否已赋值
                     * 
                     */
                    bool S3InputInfoHasBeenSet() const;

                private:

                    /**
                     * 输入来源对象的类型，支持：
<li> COS：COS源</li>
<li> URL：URL源</li>
<li> AWS-S3：AWS 源，目前只支持转码任务 </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 对象信息。
                     */
                    CosInputInfo m_cosInputInfo;
                    bool m_cosInputInfoHasBeenSet;

                    /**
                     * 当 Type 为 URL 时有效，则该项为必填，表示媒体处理 URL 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UrlInputInfo m_urlInputInfo;
                    bool m_urlInputInfoHasBeenSet;

                    /**
                     * 当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 对象信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    S3InputInfo m_s3InputInfo;
                    bool m_s3InputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_
