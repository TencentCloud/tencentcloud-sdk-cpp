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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPATASKRESULT_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPATASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 任务执行结果描述。
                */
                class DspaTaskResult : public AbstractModel
                {
                public:
                    DspaTaskResult();
                    ~DspaTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务结果。
                     * @return Result 任务结果。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置任务结果。
                     * @param _result 任务结果。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取结果描述。
                     * @return ResultDescription 结果描述。
                     * 
                     */
                    std::string GetResultDescription() const;

                    /**
                     * 设置结果描述。
                     * @param _resultDescription 结果描述。
                     * 
                     */
                    void SetResultDescription(const std::string& _resultDescription);

                    /**
                     * 判断参数 ResultDescription 是否已赋值
                     * @return ResultDescription 是否已赋值
                     * 
                     */
                    bool ResultDescriptionHasBeenSet() const;

                    /**
                     * 获取资源ID。
                     * @return ResourceId 资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID。
                     * @param _resourceId 资源ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型。
                     * @return MetaType 资源类型。
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置资源类型。
                     * @param _metaType 资源类型。
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                private:

                    /**
                     * 任务结果。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 结果描述。
                     */
                    std::string m_resultDescription;
                    bool m_resultDescriptionHasBeenSet;

                    /**
                     * 资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型。
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPATASKRESULT_H_
