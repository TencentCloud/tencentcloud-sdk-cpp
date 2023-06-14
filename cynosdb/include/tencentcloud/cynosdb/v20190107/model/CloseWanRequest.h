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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLOSEWANREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLOSEWANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CloseWan请求参数结构体
                */
                class CloseWanRequest : public AbstractModel
                {
                public:
                    CloseWanRequest();
                    ~CloseWanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例组id
                     * @return InstanceGrpId 实例组id
                     * 
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置实例组id
                     * @param _instanceGrpId 实例组id
                     * 
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * 
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                private:

                    /**
                     * 实例组id
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLOSEWANREQUEST_H_
