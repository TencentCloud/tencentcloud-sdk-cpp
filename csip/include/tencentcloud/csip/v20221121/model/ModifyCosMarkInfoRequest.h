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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSMARKINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSMARKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCosMarkInfo请求参数结构体
                */
                class ModifyCosMarkInfoRequest : public AbstractModel
                {
                public:
                    ModifyCosMarkInfoRequest();
                    ~ModifyCosMarkInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的存储桶列表
                     * @return BucketNameSet 需要修改的存储桶列表
                     * 
                     */
                    std::vector<CosBucketInfo> GetBucketNameSet() const;

                    /**
                     * 设置需要修改的存储桶列表
                     * @param _bucketNameSet 需要修改的存储桶列表
                     * 
                     */
                    void SetBucketNameSet(const std::vector<CosBucketInfo>& _bucketNameSet);

                    /**
                     * 判断参数 BucketNameSet 是否已赋值
                     * @return BucketNameSet 是否已赋值
                     * 
                     */
                    bool BucketNameSetHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return MarkInfo 备注信息
                     * 
                     */
                    std::string GetMarkInfo() const;

                    /**
                     * 设置备注信息
                     * @param _markInfo 备注信息
                     * 
                     */
                    void SetMarkInfo(const std::string& _markInfo);

                    /**
                     * 判断参数 MarkInfo 是否已赋值
                     * @return MarkInfo 是否已赋值
                     * 
                     */
                    bool MarkInfoHasBeenSet() const;

                private:

                    /**
                     * 需要修改的存储桶列表
                     */
                    std::vector<CosBucketInfo> m_bucketNameSet;
                    bool m_bucketNameSetHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_markInfo;
                    bool m_markInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSMARKINFOREQUEST_H_
