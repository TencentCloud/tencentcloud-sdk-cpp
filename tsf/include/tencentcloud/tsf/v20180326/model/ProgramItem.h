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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAMITEM_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Resource.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * tsf-privilege模块，数据项
                */
                class ProgramItem : public AbstractModel
                {
                public:
                    ProgramItem();
                    ~ProgramItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据项ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>接口查询已创建的数据集或登录控制台进行查看；也可以通过调用<a href="https://cloud.tencent.com/document/api/649/108544">CreateProgram</a>创建新的数据集。</p>
                     * @return ProgramItemId <p>数据项ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>接口查询已创建的数据集或登录控制台进行查看；也可以通过调用<a href="https://cloud.tencent.com/document/api/649/108544">CreateProgram</a>创建新的数据集。</p>
                     * 
                     */
                    std::string GetProgramItemId() const;

                    /**
                     * 设置<p>数据项ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>接口查询已创建的数据集或登录控制台进行查看；也可以通过调用<a href="https://cloud.tencent.com/document/api/649/108544">CreateProgram</a>创建新的数据集。</p>
                     * @param _programItemId <p>数据项ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>接口查询已创建的数据集或登录控制台进行查看；也可以通过调用<a href="https://cloud.tencent.com/document/api/649/108544">CreateProgram</a>创建新的数据集。</p>
                     * 
                     */
                    void SetProgramItemId(const std::string& _programItemId);

                    /**
                     * 判断参数 ProgramItemId 是否已赋值
                     * @return ProgramItemId 是否已赋值
                     * 
                     */
                    bool ProgramItemIdHasBeenSet() const;

                    /**
                     * 获取<p>资源</p>
                     * @return Resource <p>资源</p>
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置<p>资源</p>
                     * @param _resource <p>资源</p>
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>数据值列表</p>
                     * @return ValueList <p>数据值列表</p>
                     * 
                     */
                    std::vector<std::string> GetValueList() const;

                    /**
                     * 设置<p>数据值列表</p>
                     * @param _valueList <p>数据值列表</p>
                     * 
                     */
                    void SetValueList(const std::vector<std::string>& _valueList);

                    /**
                     * 判断参数 ValueList 是否已赋值
                     * @return ValueList 是否已赋值
                     * 
                     */
                    bool ValueListHasBeenSet() const;

                    /**
                     * 获取<p>全选标识，true: 全选；false: 非全选</p>
                     * @return IsAll <p>全选标识，true: 全选；false: 非全选</p>
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置<p>全选标识，true: 全选；false: 非全选</p>
                     * @param _isAll <p>全选标识，true: 全选；false: 非全选</p>
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，时间戳格式【Long】</p>
                     * @return CreationTime <p>创建时间，时间戳格式【Long】</p>
                     * 
                     */
                    int64_t GetCreationTime() const;

                    /**
                     * 设置<p>创建时间，时间戳格式【Long】</p>
                     * @param _creationTime <p>创建时间，时间戳格式【Long】</p>
                     * 
                     */
                    void SetCreationTime(const int64_t& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取<p>最后更新时间，时间戳格式【Long】，单位毫秒</p>
                     * @return LastUpdateTime <p>最后更新时间，时间戳格式【Long】，单位毫秒</p>
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置<p>最后更新时间，时间戳格式【Long】，单位毫秒</p>
                     * @param _lastUpdateTime <p>最后更新时间，时间戳格式【Long】，单位毫秒</p>
                     * 
                     */
                    void SetLastUpdateTime(const int64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>删除标识，true: 可删除；false: 不可删除</p>
                     * @return DeleteFlag <p>删除标识，true: 可删除；false: 不可删除</p>
                     * 
                     */
                    bool GetDeleteFlag() const;

                    /**
                     * 设置<p>删除标识，true: 可删除；false: 不可删除</p>
                     * @param _deleteFlag <p>删除标识，true: 可删除；false: 不可删除</p>
                     * 
                     */
                    void SetDeleteFlag(const bool& _deleteFlag);

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     * 
                     */
                    bool DeleteFlagHasBeenSet() const;

                    /**
                     * 获取<p>数据集ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>查询接口获取</p>
                     * @return ProgramId <p>数据集ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>查询接口获取</p>
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置<p>数据集ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>查询接口获取</p>
                     * @param _programId <p>数据集ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>查询接口获取</p>
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                private:

                    /**
                     * <p>数据项ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>接口查询已创建的数据集或登录控制台进行查看；也可以通过调用<a href="https://cloud.tencent.com/document/api/649/108544">CreateProgram</a>创建新的数据集。</p>
                     */
                    std::string m_programItemId;
                    bool m_programItemIdHasBeenSet;

                    /**
                     * <p>资源</p>
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>数据值列表</p>
                     */
                    std::vector<std::string> m_valueList;
                    bool m_valueListHasBeenSet;

                    /**
                     * <p>全选标识，true: 全选；false: 非全选</p>
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * <p>创建时间，时间戳格式【Long】</p>
                     */
                    int64_t m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>最后更新时间，时间戳格式【Long】，单位毫秒</p>
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * <p>删除标识，true: 可删除；false: 不可删除</p>
                     */
                    bool m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * <p>数据集ID，调用<a href="https://console.cloud.tencent.com/tsf/privilege?rid=1&amp;tab=program">DescribePrograms</a>查询接口获取</p>
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAMITEM_H_
