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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DOWNLOADACTIVEDEVICECOUNTRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DOWNLOADACTIVEDEVICECOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * DownloadActiveDeviceCount返回参数结构体
                */
                class DownloadActiveDeviceCountResponse : public AbstractModel
                {
                public:
                    DownloadActiveDeviceCountResponse();
                    ~DownloadActiveDeviceCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取URL地址
                     * @return FilePath URL地址
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                private:

                    /**
                     * URL地址
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DOWNLOADACTIVEDEVICECOUNTRESPONSE_H_
