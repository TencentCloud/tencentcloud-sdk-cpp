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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYHAVIPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYHAVIPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyHaVipAttribute请求参数结构体
                */
                class ModifyHaVipAttributeRequest : public AbstractModel
                {
                public:
                    ModifyHaVipAttributeRequest();
                    ~ModifyHaVipAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取HAVIP唯一ID，形如：havip-9o233uri。
                     * @return HaVipId HAVIP唯一ID，形如：havip-9o233uri。
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置HAVIP唯一ID，形如：havip-9o233uri。
                     * @param _haVipId HAVIP唯一ID，形如：havip-9o233uri。
                     * 
                     */
                    void SetHaVipId(const std::string& _haVipId);

                    /**
                     * 判断参数 HaVipId 是否已赋值
                     * @return HaVipId 是否已赋值
                     * 
                     */
                    bool HaVipIdHasBeenSet() const;

                    /**
                     * 获取HAVIP名称，可任意命名，但不得超过60个字符。
                     * @return HaVipName HAVIP名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置HAVIP名称，可任意命名，但不得超过60个字符。
                     * @param _haVipName HAVIP名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetHaVipName(const std::string& _haVipName);

                    /**
                     * 判断参数 HaVipName 是否已赋值
                     * @return HaVipName 是否已赋值
                     * 
                     */
                    bool HaVipNameHasBeenSet() const;

                private:

                    /**
                     * HAVIP唯一ID，形如：havip-9o233uri。
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * HAVIP名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYHAVIPATTRIBUTEREQUEST_H_
