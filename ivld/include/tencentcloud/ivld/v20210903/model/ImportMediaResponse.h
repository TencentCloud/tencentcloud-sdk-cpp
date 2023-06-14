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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIARESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIARESPONSE_H_

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
                * ImportMedia返回参数结构体
                */
                class ImportMediaResponse : public AbstractModel
                {
                public:
                    ImportMediaResponse();
                    ~ImportMediaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取媒资文件在系统中的ID
                     * @return MediaId 媒资文件在系统中的ID
                     * 
                     */
                    std::string GetMediaId() const;

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                private:

                    /**
                     * 媒资文件在系统中的ID
                     */
                    std::string m_mediaId;
                    bool m_mediaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIARESPONSE_H_
