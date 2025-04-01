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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETECLOUDPRODUCTLOGCOLLECTIONRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETECLOUDPRODUCTLOGCOLLECTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteCloudProductLogCollection返回参数结构体
                */
                class DeleteCloudProductLogCollectionResponse : public AbstractModel
                {
                public:
                    DeleteCloudProductLogCollectionResponse();
                    ~DeleteCloudProductLogCollectionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取枚举值，0创建中 1创建完成 2删除中 3删除完成
                     * @return Status 枚举值，0创建中 1创建完成 2删除中 3删除完成
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 枚举值，0创建中 1创建完成 2删除中 3删除完成
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETECLOUDPRODUCTLOGCOLLECTIONRESPONSE_H_
