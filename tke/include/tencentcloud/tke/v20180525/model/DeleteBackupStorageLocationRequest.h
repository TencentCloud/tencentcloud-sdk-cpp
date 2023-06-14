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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEBACKUPSTORAGELOCATIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEBACKUPSTORAGELOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteBackupStorageLocation请求参数结构体
                */
                class DeleteBackupStorageLocationRequest : public AbstractModel
                {
                public:
                    DeleteBackupStorageLocationRequest();
                    ~DeleteBackupStorageLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份仓库名称
                     * @return Name 备份仓库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置备份仓库名称
                     * @param _name 备份仓库名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 备份仓库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEBACKUPSTORAGELOCATIONREQUEST_H_
