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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYIMAGEATTRSREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYIMAGEATTRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/AttributeInfo.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * ModifyImageAttrs请求参数结构体
                */
                class ModifyImageAttrsRequest : public AbstractModel
                {
                public:
                    ModifyImageAttrsRequest();
                    ~ModifyImageAttrsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageId <p>镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageId <p>镜像id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>支持修改的属性列表为：{ImageName}</p>
                     * @return Attrs <p>支持修改的属性列表为：{ImageName}</p>
                     * 
                     */
                    std::vector<AttributeInfo> GetAttrs() const;

                    /**
                     * 设置<p>支持修改的属性列表为：{ImageName}</p>
                     * @param _attrs <p>支持修改的属性列表为：{ImageName}</p>
                     * 
                     */
                    void SetAttrs(const std::vector<AttributeInfo>& _attrs);

                    /**
                     * 判断参数 Attrs 是否已赋值
                     * @return Attrs 是否已赋值
                     * 
                     */
                    bool AttrsHasBeenSet() const;

                private:

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>支持修改的属性列表为：{ImageName}</p>
                     */
                    std::vector<AttributeInfo> m_attrs;
                    bool m_attrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYIMAGEATTRSREQUEST_H_
