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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTFILESRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ExportFiles返回参数结构体
                */
                class ExportFilesResponse : public AbstractModel
                {
                public:
                    ExportFilesResponse();
                    ~ExportFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取压缩文件的远程地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZipRemotePath 压缩文件的远程地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZipRemotePath() const;

                    /**
                     * 判断参数 ZipRemotePath 是否已赋值
                     * @return ZipRemotePath 是否已赋值
                     * 
                     */
                    bool ZipRemotePathHasBeenSet() const;

                private:

                    /**
                     * 压缩文件的远程地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zipRemotePath;
                    bool m_zipRemotePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTFILESRESPONSE_H_
