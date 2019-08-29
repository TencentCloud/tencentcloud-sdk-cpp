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

#ifndef TENCENTCLOUD_TAG_V20180813_TAGCLIENT_H_
#define TENCENTCLOUD_TAG_V20180813_TAGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tag/v20180813/model/AddResourceTagRequest.h>
#include <tencentcloud/tag/v20180813/model/AddResourceTagResponse.h>
#include <tencentcloud/tag/v20180813/model/CreateTagRequest.h>
#include <tencentcloud/tag/v20180813/model/CreateTagResponse.h>
#include <tencentcloud/tag/v20180813/model/DeleteResourceTagRequest.h>
#include <tencentcloud/tag/v20180813/model/DeleteResourceTagResponse.h>
#include <tencentcloud/tag/v20180813/model/DeleteTagRequest.h>
#include <tencentcloud/tag/v20180813/model/DeleteTagResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourcesByTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourcesByTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagKeysRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagKeysResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagValuesRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagValuesResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/ModifyResourceTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/ModifyResourceTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/UpdateResourceTagValueRequest.h>
#include <tencentcloud/tag/v20180813/model/UpdateResourceTagValueResponse.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            class TagClient : public AbstractClient
            {
            public:
                TagClient(const Credential &credential, const std::string &region);
                TagClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddResourceTagResponse> AddResourceTagOutcome;
                typedef std::future<AddResourceTagOutcome> AddResourceTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::AddResourceTagRequest&, AddResourceTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddResourceTagAsyncHandler;
                typedef Outcome<Error, Model::CreateTagResponse> CreateTagOutcome;
                typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::CreateTagRequest&, CreateTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
                typedef Outcome<Error, Model::DeleteResourceTagResponse> DeleteResourceTagOutcome;
                typedef std::future<DeleteResourceTagOutcome> DeleteResourceTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DeleteResourceTagRequest&, DeleteResourceTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceTagAsyncHandler;
                typedef Outcome<Error, Model::DeleteTagResponse> DeleteTagOutcome;
                typedef std::future<DeleteTagOutcome> DeleteTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DeleteTagRequest&, DeleteTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagAsyncHandler;
                typedef Outcome<Error, Model::DescribeResourceTagsByResourceIdsResponse> DescribeResourceTagsByResourceIdsOutcome;
                typedef std::future<DescribeResourceTagsByResourceIdsOutcome> DescribeResourceTagsByResourceIdsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeResourceTagsByResourceIdsRequest&, DescribeResourceTagsByResourceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTagsByResourceIdsAsyncHandler;
                typedef Outcome<Error, Model::DescribeResourcesByTagsResponse> DescribeResourcesByTagsOutcome;
                typedef std::future<DescribeResourcesByTagsOutcome> DescribeResourcesByTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeResourcesByTagsRequest&, DescribeResourcesByTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesByTagsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTagKeysResponse> DescribeTagKeysOutcome;
                typedef std::future<DescribeTagKeysOutcome> DescribeTagKeysOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeTagKeysRequest&, DescribeTagKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagKeysAsyncHandler;
                typedef Outcome<Error, Model::DescribeTagValuesResponse> DescribeTagValuesOutcome;
                typedef std::future<DescribeTagValuesOutcome> DescribeTagValuesOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeTagValuesRequest&, DescribeTagValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagValuesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTagsResponse> DescribeTagsOutcome;
                typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeTagsRequest&, DescribeTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
                typedef Outcome<Error, Model::ModifyResourceTagsResponse> ModifyResourceTagsOutcome;
                typedef std::future<ModifyResourceTagsOutcome> ModifyResourceTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::ModifyResourceTagsRequest&, ModifyResourceTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceTagsAsyncHandler;
                typedef Outcome<Error, Model::UpdateResourceTagValueResponse> UpdateResourceTagValueOutcome;
                typedef std::future<UpdateResourceTagValueOutcome> UpdateResourceTagValueOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::UpdateResourceTagValueRequest&, UpdateResourceTagValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceTagValueAsyncHandler;



                /**
                 *本接口用于给标签关联资源
                 * @param req AddResourceTagRequest
                 * @return AddResourceTagOutcome
                 */
                AddResourceTagOutcome AddResourceTag(const Model::AddResourceTagRequest &request);
                void AddResourceTagAsync(const Model::AddResourceTagRequest& request, const AddResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddResourceTagOutcomeCallable AddResourceTagCallable(const Model::AddResourceTagRequest& request);

                /**
                 *本接口用于创建一对标签键和标签值
                 * @param req CreateTagRequest
                 * @return CreateTagOutcome
                 */
                CreateTagOutcome CreateTag(const Model::CreateTagRequest &request);
                void CreateTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTagOutcomeCallable CreateTagCallable(const Model::CreateTagRequest& request);

                /**
                 *本接口用于解除标签和资源的关联关系
                 * @param req DeleteResourceTagRequest
                 * @return DeleteResourceTagOutcome
                 */
                DeleteResourceTagOutcome DeleteResourceTag(const Model::DeleteResourceTagRequest &request);
                void DeleteResourceTagAsync(const Model::DeleteResourceTagRequest& request, const DeleteResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceTagOutcomeCallable DeleteResourceTagCallable(const Model::DeleteResourceTagRequest& request);

                /**
                 *本接口用于删除一对标签键和标签值
                 * @param req DeleteTagRequest
                 * @return DeleteTagOutcome
                 */
                DeleteTagOutcome DeleteTag(const Model::DeleteTagRequest &request);
                void DeleteTagAsync(const Model::DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagOutcomeCallable DeleteTagCallable(const Model::DeleteTagRequest& request);

                /**
                 *用于查询已有资源标签键值对
                 * @param req DescribeResourceTagsByResourceIdsRequest
                 * @return DescribeResourceTagsByResourceIdsOutcome
                 */
                DescribeResourceTagsByResourceIdsOutcome DescribeResourceTagsByResourceIds(const Model::DescribeResourceTagsByResourceIdsRequest &request);
                void DescribeResourceTagsByResourceIdsAsync(const Model::DescribeResourceTagsByResourceIdsRequest& request, const DescribeResourceTagsByResourceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTagsByResourceIdsOutcomeCallable DescribeResourceTagsByResourceIdsCallable(const Model::DescribeResourceTagsByResourceIdsRequest& request);

                /**
                 *通过标签查询资源列表
                 * @param req DescribeResourcesByTagsRequest
                 * @return DescribeResourcesByTagsOutcome
                 */
                DescribeResourcesByTagsOutcome DescribeResourcesByTags(const Model::DescribeResourcesByTagsRequest &request);
                void DescribeResourcesByTagsAsync(const Model::DescribeResourcesByTagsRequest& request, const DescribeResourcesByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesByTagsOutcomeCallable DescribeResourcesByTagsCallable(const Model::DescribeResourcesByTagsRequest& request);

                /**
                 *用于查询已建立的标签列表中的标签键。

                 * @param req DescribeTagKeysRequest
                 * @return DescribeTagKeysOutcome
                 */
                DescribeTagKeysOutcome DescribeTagKeys(const Model::DescribeTagKeysRequest &request);
                void DescribeTagKeysAsync(const Model::DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagKeysOutcomeCallable DescribeTagKeysCallable(const Model::DescribeTagKeysRequest& request);

                /**
                 *用于查询已建立的标签列表中的标签值。
                 * @param req DescribeTagValuesRequest
                 * @return DescribeTagValuesOutcome
                 */
                DescribeTagValuesOutcome DescribeTagValues(const Model::DescribeTagValuesRequest &request);
                void DescribeTagValuesAsync(const Model::DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagValuesOutcomeCallable DescribeTagValuesCallable(const Model::DescribeTagValuesRequest& request);

                /**
                 *用于查询已建立的标签列表。

                 * @param req DescribeTagsRequest
                 * @return DescribeTagsOutcome
                 */
                DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest &request);
                void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request);

                /**
                 *本接口用于修改资源关联的所有标签
                 * @param req ModifyResourceTagsRequest
                 * @return ModifyResourceTagsOutcome
                 */
                ModifyResourceTagsOutcome ModifyResourceTags(const Model::ModifyResourceTagsRequest &request);
                void ModifyResourceTagsAsync(const Model::ModifyResourceTagsRequest& request, const ModifyResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceTagsOutcomeCallable ModifyResourceTagsCallable(const Model::ModifyResourceTagsRequest& request);

                /**
                 *本接口用于修改资源已关联的标签值（标签键不变）
                 * @param req UpdateResourceTagValueRequest
                 * @return UpdateResourceTagValueOutcome
                 */
                UpdateResourceTagValueOutcome UpdateResourceTagValue(const Model::UpdateResourceTagValueRequest &request);
                void UpdateResourceTagValueAsync(const Model::UpdateResourceTagValueRequest& request, const UpdateResourceTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateResourceTagValueOutcomeCallable UpdateResourceTagValueCallable(const Model::UpdateResourceTagValueRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_TAGCLIENT_H_
