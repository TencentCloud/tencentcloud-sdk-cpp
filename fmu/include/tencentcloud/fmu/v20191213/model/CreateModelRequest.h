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
                     * 获取图片base64数据，用于试唇色，要求必须是LUT 格式的cube文件转换成512*512的PNG图片。查看 [LUT文件的使用说明](https://cloud.tencent.com/document/product/1172/41701)。了解 [cube文件转png图片小工具](http://yyb.gtimg.com/aiplat/static/qcloud-cube-to-png.html)。
                     * @return LUTFile 图片base64数据，用于试唇色，要求必须是LUT 格式的cube文件转换成512*512的PNG图片。查看 [LUT文件的使用说明](https://cloud.tencent.com/document/product/1172/41701)。了解 [cube文件转png图片小工具](http://yyb.gtimg.com/aiplat/static/qcloud-cube-to-png.html)。
                     * 
                     */
                    std::string GetLUTFile() const;

                    /**
                     * 设置图片base64数据，用于试唇色，要求必须是LUT 格式的cube文件转换成512*512的PNG图片。查看 [LUT文件的使用说明](https://cloud.tencent.com/document/product/1172/41701)。了解 [cube文件转png图片小工具](http://yyb.gtimg.com/aiplat/static/qcloud-cube-to-png.html)。
                     * @param _lUTFile 图片base64数据，用于试唇色，要求必须是LUT 格式的cube文件转换成512*512的PNG图片。查看 [LUT文件的使用说明](https://cloud.tencent.com/document/product/1172/41701)。了解 [cube文件转png图片小工具](http://yyb.gtimg.com/aiplat/static/qcloud-cube-to-png.html)。
                     * 
                     */
                    void SetLUTFile(const std::string& _lUTFile);

                    /**
                     * 判断参数 LUTFile 是否已赋值
                     * @return LUTFile 是否已赋值
                     * 
                     */
                    bool LUTFileHasBeenSet() const;

                    /**
                     * 获取文件描述信息，可用于备注。
                     * @return Description 文件描述信息，可用于备注。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件描述信息，可用于备注。
                     * @param _description 文件描述信息，可用于备注。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 图片base64数据，用于试唇色，要求必须是LUT 格式的cube文件转换成512*512的PNG图片。查看 [LUT文件的使用说明](https://cloud.tencent.com/document/product/1172/41701)。了解 [cube文件转png图片小工具](http://yyb.gtimg.com/aiplat/static/qcloud-cube-to-png.html)。
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
