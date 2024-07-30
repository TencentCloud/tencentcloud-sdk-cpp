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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATEUSERPRIVILEGES_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATEUSERPRIVILEGES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 更新用户权限结构体
                */
                class UpdateUserPrivileges : public AbstractModel
                {
                public:
                    UpdateUserPrivileges();
                    ~UpdateUserPrivileges() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否设置catalog权限
                     * @return IsSetGlobalCatalog 是否设置catalog权限
                     * 
                     */
                    bool GetIsSetGlobalCatalog() const;

                    /**
                     * 设置是否设置catalog权限
                     * @param _isSetGlobalCatalog 是否设置catalog权限
                     * 
                     */
                    void SetIsSetGlobalCatalog(const bool& _isSetGlobalCatalog);

                    /**
                     * 判断参数 IsSetGlobalCatalog 是否已赋值
                     * @return IsSetGlobalCatalog 是否已赋值
                     * 
                     */
                    bool IsSetGlobalCatalogHasBeenSet() const;

                private:

                    /**
                     * 是否设置catalog权限
                     */
                    bool m_isSetGlobalCatalog;
                    bool m_isSetGlobalCatalogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATEUSERPRIVILEGES_H_
