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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_REQUESTLOCALTASKRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_REQUESTLOCALTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * RequestLocalTask返回参数结构体
                */
                class RequestLocalTaskResponse : public AbstractModel
                {
                public:
                    RequestLocalTaskResponse();
                    ~RequestLocalTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的任务id
                     * @return Sid 返回的任务id
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取任务文件的mk5
                     * @return SrcFileMd5 任务文件的mk5
                     * 
                     */
                    std::string GetSrcFileMd5() const;

                    /**
                     * 判断参数 SrcFileMd5 是否已赋值
                     * @return SrcFileMd5 是否已赋值
                     * 
                     */
                    bool SrcFileMd5HasBeenSet() const;

                    /**
                     * 获取文件大小，可不传
                     * @return SrcFileSize 文件大小，可不传
                     * 
                     */
                    int64_t GetSrcFileSize() const;

                    /**
                     * 判断参数 SrcFileSize 是否已赋值
                     * @return SrcFileSize 是否已赋值
                     * 
                     */
                    bool SrcFileSizeHasBeenSet() const;

                    /**
                     * 获取任务文件的下载地址，必须无鉴权可下载
                     * @return SrcFileUrl 任务文件的下载地址，必须无鉴权可下载
                     * 
                     */
                    std::string GetSrcFileUrl() const;

                    /**
                     * 判断参数 SrcFileUrl 是否已赋值
                     * @return SrcFileUrl 是否已赋值
                     * 
                     */
                    bool SrcFileUrlHasBeenSet() const;

                    /**
                     * 获取release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                     * @return SrcFileType release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                     * 
                     */
                    std::string GetSrcFileType() const;

                    /**
                     * 判断参数 SrcFileType 是否已赋值
                     * @return SrcFileType 是否已赋值
                     * 
                     */
                    bool SrcFileTypeHasBeenSet() const;

                    /**
                     * 获取enterprise
trial
                     * @return SrcFileVersion enterprise
trial
                     * 
                     */
                    std::string GetSrcFileVersion() const;

                    /**
                     * 判断参数 SrcFileVersion 是否已赋值
                     * @return SrcFileVersion 是否已赋值
                     * 
                     */
                    bool SrcFileVersionHasBeenSet() const;

                    /**
                     * 获取补充字段
                     * @return EncryptParam 补充字段
                     * 
                     */
                    std::string GetEncryptParam() const;

                    /**
                     * 判断参数 EncryptParam 是否已赋值
                     * @return EncryptParam 是否已赋值
                     * 
                     */
                    bool EncryptParamHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return EncryptState 任务状态
                     * 
                     */
                    int64_t GetEncryptState() const;

                    /**
                     * 判断参数 EncryptState 是否已赋值
                     * @return EncryptState 是否已赋值
                     * 
                     */
                    bool EncryptStateHasBeenSet() const;

                private:

                    /**
                     * 返回的任务id
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 任务文件的mk5
                     */
                    std::string m_srcFileMd5;
                    bool m_srcFileMd5HasBeenSet;

                    /**
                     * 文件大小，可不传
                     */
                    int64_t m_srcFileSize;
                    bool m_srcFileSizeHasBeenSet;

                    /**
                     * 任务文件的下载地址，必须无鉴权可下载
                     */
                    std::string m_srcFileUrl;
                    bool m_srcFileUrlHasBeenSet;

                    /**
                     * release: 需要INFO-PLIST文件，会生成工具部署安装包，并带有license文件，绑定机器；nobind不需要INFO-PLIST文件，不绑定机器
                     */
                    std::string m_srcFileType;
                    bool m_srcFileTypeHasBeenSet;

                    /**
                     * enterprise
trial
                     */
                    std::string m_srcFileVersion;
                    bool m_srcFileVersionHasBeenSet;

                    /**
                     * 补充字段
                     */
                    std::string m_encryptParam;
                    bool m_encryptParamHasBeenSet;

                    /**
                     * 任务状态
                     */
                    int64_t m_encryptState;
                    bool m_encryptStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_REQUESTLOCALTASKRESPONSE_H_
