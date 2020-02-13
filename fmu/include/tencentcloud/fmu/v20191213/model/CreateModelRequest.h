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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_CREATEMODELREQUEST_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_CREATEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * CreateModel请求参数结构体
                */
                class CreateModelRequest : public AbstractModel
                {
                public:
                    CreateModelRequest();
                    ~CreateModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取LUT文件。 用于试唇色。须为 512*512的PNG图片。
                     * @return LUTFile LUT文件。 用于试唇色。须为 512*512的PNG图片。
                     */
                    std::string GetLUTFile() const;

                    /**
                     * 设置LUT文件。 用于试唇色。须为 512*512的PNG图片。
                     * @param LUTFile LUT文件。 用于试唇色。须为 512*512的PNG图片。
                     */
                    void SetLUTFile(const std::string& _lUTFile);

                    /**
                     * 判断参数 LUTFile 是否已赋值
                     * @return LUTFile 是否已赋值
                     */
                    bool LUTFileHasBeenSet() const;

                    /**
                     * 获取文件描述信息，可用于备注。
                     * @return Description 文件描述信息，可用于备注。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件描述信息，可用于备注。
                     * @param Description 文件描述信息，可用于备注。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * LUT文件。 用于试唇色。须为 512*512的PNG图片。
                     */
                    std::string m_lUTFile;
                    bool m_lUTFileHasBeenSet;

                    /**
                     * 文件描述信息，可用于备注。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_CREATEMODELREQUEST_H_
