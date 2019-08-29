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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DELETEFILESAMPLEREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DELETEFILESAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * DeleteFileSample请求参数结构体
                */
                class DeleteFileSampleRequest : public AbstractModel
                {
                public:
                    DeleteFileSampleRequest();
                    ~DeleteFileSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一标识数组
                     * @return Ids 唯一标识数组
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置唯一标识数组
                     * @param Ids 唯一标识数组
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * 唯一标识数组
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DELETEFILESAMPLEREQUEST_H_
