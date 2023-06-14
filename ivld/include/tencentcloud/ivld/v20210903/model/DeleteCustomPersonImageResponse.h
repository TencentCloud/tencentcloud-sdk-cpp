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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMPERSONIMAGERESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMPERSONIMAGERESPONSE_H_

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
                * DeleteCustomPersonImage返回参数结构体
                */
                class DeleteCustomPersonImageResponse : public AbstractModel
                {
                public:
                    DeleteCustomPersonImageResponse();
                    ~DeleteCustomPersonImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义人物Id
                     * @return PersonId 自定义人物Id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取已删除的人物图片Id
                     * @return ImageId 已删除的人物图片Id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                private:

                    /**
                     * 自定义人物Id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 已删除的人物图片Id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMPERSONIMAGERESPONSE_H_
