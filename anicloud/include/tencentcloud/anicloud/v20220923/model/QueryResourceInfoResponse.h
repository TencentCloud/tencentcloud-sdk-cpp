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

#ifndef TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCEINFORESPONSE_H_
#define TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/anicloud/v20220923/model/Resource.h>


namespace TencentCloud
{
    namespace Anicloud
    {
        namespace V20220923
        {
            namespace Model
            {
                /**
                * QueryResourceInfo返回参数结构体
                */
                class QueryResourceInfoResponse : public AbstractModel
                {
                public:
                    QueryResourceInfoResponse();
                    ~QueryResourceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * 资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCEINFORESPONSE_H_
