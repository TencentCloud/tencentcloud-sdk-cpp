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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SCFINSTANCELIST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SCFINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/SCFInstanceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * SCF实例详情 - 异步关联云资源数据结构
                */
                class SCFInstanceList : public AbstractModel
                {
                public:
                    SCFInstanceList();
                    ~SCFInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>SCF实例详情</p>
                     * @return InstanceList <p>SCF实例详情</p>
                     * 
                     */
                    std::vector<SCFInstanceDetail> GetInstanceList() const;

                    /**
                     * 设置<p>SCF实例详情</p>
                     * @param _instanceList <p>SCF实例详情</p>
                     * 
                     */
                    void SetInstanceList(const std::vector<SCFInstanceDetail>& _instanceList);

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return Error <p>错误信息</p>
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _error <p>错误信息</p>
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取<p>地域下总数</p>
                     * @return TotalCount <p>地域下总数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>地域下总数</p>
                     * @param _totalCount <p>地域下总数</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>SCF实例详情</p>
                     */
                    std::vector<SCFInstanceDetail> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * <p>地域下总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SCFINSTANCELIST_H_
