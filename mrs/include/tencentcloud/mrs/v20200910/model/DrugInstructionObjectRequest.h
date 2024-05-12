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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DRUGINSTRUCTIONOBJECTREQUEST_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DRUGINSTRUCTIONOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/PdfInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * DrugInstructionObject请求参数结构体
                */
                class DrugInstructionObjectRequest : public AbstractModel
                {
                public:
                    DrugInstructionObjectRequest();
                    ~DrugInstructionObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取药品说明书PDF文件信息, 目前只支持传PDF文件的Base64编码字符(PDF文件不能超过10MB，如果超过建议先压缩PDF，再转成base64).
                     * @return PdfInfo 药品说明书PDF文件信息, 目前只支持传PDF文件的Base64编码字符(PDF文件不能超过10MB，如果超过建议先压缩PDF，再转成base64).
                     * 
                     */
                    PdfInfo GetPdfInfo() const;

                    /**
                     * 设置药品说明书PDF文件信息, 目前只支持传PDF文件的Base64编码字符(PDF文件不能超过10MB，如果超过建议先压缩PDF，再转成base64).
                     * @param _pdfInfo 药品说明书PDF文件信息, 目前只支持传PDF文件的Base64编码字符(PDF文件不能超过10MB，如果超过建议先压缩PDF，再转成base64).
                     * 
                     */
                    void SetPdfInfo(const PdfInfo& _pdfInfo);

                    /**
                     * 判断参数 PdfInfo 是否已赋值
                     * @return PdfInfo 是否已赋值
                     * 
                     */
                    bool PdfInfoHasBeenSet() const;

                private:

                    /**
                     * 药品说明书PDF文件信息, 目前只支持传PDF文件的Base64编码字符(PDF文件不能超过10MB，如果超过建议先压缩PDF，再转成base64).
                     */
                    PdfInfo m_pdfInfo;
                    bool m_pdfInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DRUGINSTRUCTIONOBJECTREQUEST_H_
