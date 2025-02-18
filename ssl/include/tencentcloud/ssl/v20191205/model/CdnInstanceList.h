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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCELIST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CdnInstanceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * cdn实例详情 - 异步关联云资源数据结构
                */
                class CdnInstanceList : public AbstractModel
                {
                public:
                    CdnInstanceList();
                    ~CdnInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该地域下CDN域名总数	
                     * @return TotalCount 该地域下CDN域名总数	
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置该地域下CDN域名总数	
                     * @param _totalCount 该地域下CDN域名总数	
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取cdn域名详情	
                     * @return InstanceList cdn域名详情	
                     * 
                     */
                    std::vector<CdnInstanceDetail> GetInstanceList() const;

                    /**
                     * 设置cdn域名详情	
                     * @param _instanceList cdn域名详情	
                     * 
                     */
                    void SetInstanceList(const std::vector<CdnInstanceDetail>& _instanceList);

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取是否查询异常
                     * @return Error 是否查询异常
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置是否查询异常
                     * @param _error 是否查询异常
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 该地域下CDN域名总数	
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * cdn域名详情	
                     */
                    std::vector<CdnInstanceDetail> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * 是否查询异常
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCELIST_H_
