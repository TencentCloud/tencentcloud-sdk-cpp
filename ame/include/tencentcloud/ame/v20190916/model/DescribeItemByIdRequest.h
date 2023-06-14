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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEITEMBYIDREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEITEMBYIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeItemById请求参数结构体
                */
                class DescribeItemByIdRequest : public AbstractModel
                {
                public:
                    DescribeItemByIdRequest();
                    ~DescribeItemByIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲ID，目前暂不支持批量查询
                     * @return ItemIDs 歌曲ID，目前暂不支持批量查询
                     * 
                     */
                    std::string GetItemIDs() const;

                    /**
                     * 设置歌曲ID，目前暂不支持批量查询
                     * @param _itemIDs 歌曲ID，目前暂不支持批量查询
                     * 
                     */
                    void SetItemIDs(const std::string& _itemIDs);

                    /**
                     * 判断参数 ItemIDs 是否已赋值
                     * @return ItemIDs 是否已赋值
                     * 
                     */
                    bool ItemIDsHasBeenSet() const;

                private:

                    /**
                     * 歌曲ID，目前暂不支持批量查询
                     */
                    std::string m_itemIDs;
                    bool m_itemIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEITEMBYIDREQUEST_H_
