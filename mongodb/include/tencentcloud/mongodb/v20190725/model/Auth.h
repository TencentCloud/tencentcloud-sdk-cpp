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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_AUTH_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_AUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 用户权限
                */
                class Auth : public AbstractModel
                {
                public:
                    Auth();
                    ~Auth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取*表示所有数据库,db.name表示特定的name数据库。
                     * @return NameSpace *表示所有数据库,db.name表示特定的name数据库。
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置*表示所有数据库,db.name表示特定的name数据库。
                     * @param NameSpace *表示所有数据库,db.name表示特定的name数据库。
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取用于控制权限,0无权限，1只读，2只写，3读写。
                     * @return Mask 用于控制权限,0无权限，1只读，2只写，3读写。
                     */
                    int64_t GetMask() const;

                    /**
                     * 设置用于控制权限,0无权限，1只读，2只写，3读写。
                     * @param Mask 用于控制权限,0无权限，1只读，2只写，3读写。
                     */
                    void SetMask(const int64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     */
                    bool MaskHasBeenSet() const;

                private:

                    /**
                     * *表示所有数据库,db.name表示特定的name数据库。
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * 用于控制权限,0无权限，1只读，2只写，3读写。
                     */
                    int64_t m_mask;
                    bool m_maskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_AUTH_H_
