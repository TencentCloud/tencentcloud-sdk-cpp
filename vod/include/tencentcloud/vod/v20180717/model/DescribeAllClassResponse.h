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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEALLCLASSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEALLCLASSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaClassInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeAllClass返回参数结构体
                */
                class DescribeAllClassResponse : public AbstractModel
                {
                public:
                    DescribeAllClassResponse();
                    ~DescribeAllClassResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分类信息集合
                     * @return ClassInfoSet 分类信息集合
                     * 
                     */
                    std::vector<MediaClassInfo> GetClassInfoSet() const;

                    /**
                     * 判断参数 ClassInfoSet 是否已赋值
                     * @return ClassInfoSet 是否已赋值
                     * 
                     */
                    bool ClassInfoSetHasBeenSet() const;

                private:

                    /**
                     * 分类信息集合
                     */
                    std::vector<MediaClassInfo> m_classInfoSet;
                    bool m_classInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEALLCLASSRESPONSE_H_
