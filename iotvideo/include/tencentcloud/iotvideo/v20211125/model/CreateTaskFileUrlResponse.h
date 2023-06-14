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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATETASKFILEURLRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATETASKFILEURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * CreateTaskFileUrl返回参数结构体
                */
                class CreateTaskFileUrlResponse : public AbstractModel
                {
                public:
                    CreateTaskFileUrlResponse();
                    ~CreateTaskFileUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务文件上传链接
                     * @return Url 任务文件上传链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取任务文件名
                     * @return FileName 任务文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * 任务文件上传链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 任务文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CREATETASKFILEURLRESPONSE_H_
