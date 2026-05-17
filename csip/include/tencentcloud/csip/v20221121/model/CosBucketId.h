/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETID_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 存储桶id
                */
                class CosBucketId : public AbstractModel
                {
                public:
                    CosBucketId();
                    ~CosBucketId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取bucket id集合
                     * @return BucketIdSet bucket id集合
                     * 
                     */
                    std::vector<std::string> GetBucketIdSet() const;

                    /**
                     * 设置bucket id集合
                     * @param _bucketIdSet bucket id集合
                     * 
                     */
                    void SetBucketIdSet(const std::vector<std::string>& _bucketIdSet);

                    /**
                     * 判断参数 BucketIdSet 是否已赋值
                     * @return BucketIdSet 是否已赋值
                     * 
                     */
                    bool BucketIdSetHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * bucket id集合
                     */
                    std::vector<std::string> m_bucketIdSet;
                    bool m_bucketIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETID_H_
